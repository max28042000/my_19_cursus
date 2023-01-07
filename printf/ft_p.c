/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:08:01 by maxhomme          #+#    #+#             */
/*   Updated: 2022/06/17 11:06:11 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hexa(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_print_hexa(ptr / 16);
		ft_print_hexa(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
		{
			ft_putchar((ptr + '0'));
		}
		else
		{
			ft_putchar((ptr - 10 + 'a'));
		}
	}
}

static int	ft_len_hexa(unsigned long ptr)
{
	int		value;

	value = 0;
	while (ptr)
	{
		ptr /= 16;
		value++;
	}
	return (value);
}

int	ft_p(unsigned long ptr)
{
	unsigned int	value;

	value = 0;
	if (ptr == 0)
	{
		write(1, "0x0", 3);
		value += 3;
	}
	else
	{
		write(1, "0x", 2);
		value += 2;
		ft_print_hexa(ptr);
		value += ft_len_hexa(ptr);
	}
	return (value);
}
