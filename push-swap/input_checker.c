/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:36:08 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/19 21:46:17 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_line_check(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] <= 47 || str[i] >= 58)
			return (0);
		i++;
	}
	return (1);
}

int	ft_input_checker(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
	{
		return (0);
	}
	while (i < ac)
	{
		if (ft_line_check(av[i]) == 0 || ft_atoi(av[i]) == 100000000000)
		{
			ft_putstr("Error");
			return (0);
		}
		i++;
	}
	return (1);
}
