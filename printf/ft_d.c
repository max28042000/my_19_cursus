/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:52:54 by maxhomme          #+#    #+#             */
/*   Updated: 2022/06/17 05:35:47 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_nbr_value(int i, int *value)
{
	if (i == -2147483648)
	{
		ft_nbr_value(i / 10, value);
		*value = *value + 1;
	}
	else if (i < 0)
	{
		*value = *value + 1;
		ft_nbr_value(-i, value);
	}
	else
	{
		if (i > 9)
			ft_nbr_value(i / 10, value);
		*value = *value + 1;
	}
}

int	ft_d(int i)
{
	int	value;

	value = 0;
	ft_putnbr(i);
	ft_nbr_value(i, &value);
	return (value);
}
