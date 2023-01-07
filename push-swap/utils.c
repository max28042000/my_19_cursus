/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:37:04 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/03 18:19:50 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char const *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s += 1;
	}
	write(1, "\n", 1);
}

long long	ft_atoi(const char *str)
{
	int			i;
	long long	signe;
	long long	res;

	i = 0;
	signe = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + (str[i] - 48);
		if (res * signe < -2147483648)
			return (100000000000);
		if (res * signe > 2147483647)
			return (100000000000);
		i++;
	}
	return (res * signe);
}

int	ft_is_it_sorted(long long *ia)
{
	int	i;

	i = 0;
	while (ia[i])
	{
		if (ia[i] > ia[i + 1] && ia[i + 1] != 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_2_digits(long long *ia)
{
	if (ia[0] == 2)
		ft_ra(ia);
}
