/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:19:54 by maxhomme          #+#    #+#             */
/*   Updated: 2022/06/07 22:20:27 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		value;
	va_list	args;

	i = 0;
	value = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			value += ft_reco_type(args, str[i + 1]);
			i += 2;
		}
		else
		{
			value ++;
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (value);
}
