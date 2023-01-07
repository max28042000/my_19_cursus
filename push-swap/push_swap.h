/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:12:08 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/19 22:13:22 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void		ft_wich_algo(long long *ia, long long *ib, int ac);
int			ft_line_check(char *str);
void		ft_loop(long long *ia, long long *ib, long long testnum, int ac);
int			ft_is_it_sorted(long long *ia);
void		ft_algo_radix(long long *ia, long long *ib, int ac);
void		ft_pa(long long *ia, long long *ib);
void		ft_pb(long long *ia, long long *ib);
void		ft_ra(long long *ia);
long long	ft_define_place(long long *ib, int ac, long long mem);
int			ft_places_value(long long *ia, long long *ib, int ac, char **av);
void		ft_putstr(char const *s);
long long	ft_atoi(const char *str);
int			ft_line_check(char *str);
int			ft_input_checker(int ac, char **av);
void		ft_malloc(long long *ia, long long *ib);
void		ft_2_digits(long long *ia);

#endif
