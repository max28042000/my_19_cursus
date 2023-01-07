/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiate_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:35:42 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/03 13:35:47 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_define_place(long long *ib, int ac, long long mem)
{
	int			i;
	long long	count;
	int			j;

	j = 0;
	i = 0;
	count = 1;
	while (i < ac - 1)
	{
		if (mem > ib[i])
			count++;
		if (mem == ib[i])
			j++;
		i++;
	}
	if (j > 1)
		return (-1);
	return (count);
}

int	ft_places_value(long long *ia, long long *ib, int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		ib[i] = ft_atoi(av[i + 1]);
		i++;
	}
	i = 0;
	while (i < ac - 1)
	{
		ia[i] = ft_define_place(ib, ac, ib[i]);
		if (ia[i] == -1)
			return (-1);
		i++;
	}
	i = 0;
	while (i < ac - 1)
	{
		ib[i] = 0;
		i++;
	}
	return (1);
}
