/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:55:06 by maxhomme          #+#    #+#             */
/*   Updated: 2022/06/17 11:26:56 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define LOWERCASE_HEXADECIMAL "0123456789abcdef"
# define UPPERCASE_HEXADECIMAL "0123456789ABCDEF"
# define BASE_DECIMAL "0123456789"

int		ft_c(int i);
int		ft_d(int i);
int		ft_p(unsigned long ptr);
int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
int		ft_u(int n, char *base);
int		ft_p(unsigned long ptr);
int		ft_xx(int n, char *base);
int		ft_putnbr(long nb);
void	ft_putstr(char *str);
int		ft_reco_type(va_list args, const char id);
int		ft_s(char *str);
int		ft_printxbase(int n, char *base);

#endif
