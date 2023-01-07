/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 05:22:57 by maxhomme          #+#    #+#             */
/*   Updated: 2022/06/17 05:39:55 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(int n, char *base)
{
	unsigned int	value;

	value = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		value += 1;
	}
	else
	{
		value += ft_printxbase(n, base);
	}
	return (value);
}
