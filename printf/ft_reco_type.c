/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reco_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 22:52:38 by maxhomme          #+#    #+#             */
/*   Updated: 2022/06/17 11:18:40 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_reco_type(va_list args, const char id)
{
	int	value;

	value = 0;
	if (id == 'c')
		value += ft_c(va_arg(args, int));
	else if (id == 's')
		value += ft_s(va_arg(args, char *));
	else if (id == 'p')
		value += ft_p(va_arg(args, unsigned long));
	else if (id == 'd' || id == 'i')
		value += ft_d(va_arg(args, int));
	else if (id == 'u')
		value += ft_u(va_arg(args, int), BASE_DECIMAL);
	else if (id == 'x')
		value += ft_xx(va_arg(args, int), LOWERCASE_HEXADECIMAL);
	else if (id == 'X')
		value += ft_xx(va_arg(args, int), UPPERCASE_HEXADECIMAL);
	else if (id == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (value);
}
