/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:51:14 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/04 17:18:51 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str(char *x, unsigned int number, long int i)
{
	while (number > 9)
	{
		x[i--] = 48 + (number % 10);
		number = number / 10;
	}
	x[i--] = 48 + (number % 10);
	return (x);
}

static long int	ft_i(long long int n)
{
	int					i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i++;
		n = 0 - n;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	if (n > 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char				*x;
	long int			i;
	unsigned int		number;
	int					s;

	s = 1;
	i = ft_i(n);
	x = (char *)malloc(sizeof(char) * (i + 1));
	if (!(x))
		return (0);
	x[i--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		s *= -1;
		number = n * -1;
		x[0] = '-';
	}
	else
		number = n;
	x = ft_str(x, number, i);
	return (x);
}
