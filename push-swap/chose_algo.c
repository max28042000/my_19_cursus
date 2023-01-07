/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chose_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:06:25 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/20 15:02:48 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(long long *ia)
{
	long long	m;

	m = ia[0];
	ia[0] = ia[2];
	ia[2] = ia[1];
	ia[1] = m;
	ft_putstr("rra");
}

void	ft_sa(long long *ia)
{
	long long	m;

	m = ia[0];
	ia[0] = ia[1];
	ia[1] = m;
	ft_putstr("sa");
}

void	ft_small_list(long long *ia)
{
	if (ia[0] == 1 && ia[1] == 3)
	{
		ft_rra(ia);
		ft_sa(ia);
	}
	if (ia[0] == 2 && ia[1] == 1)
		ft_sa(ia);
	if (ia[0] == 2 && ia[1] == 3)
		ft_rra(ia);
	if (ia[0] == 3 && ia[1] == 1)
		ft_ra(ia);
	if (ia[0] == 3 && ia[1] == 2)
	{
		ft_ra(ia);
		ft_sa(ia);
	}
}

void	ft_wich_algo(long long *ia, long long *ib, int ac)
{
	if (ac == 4)
		ft_small_list(ia);
	else if (ac == 3)
		ft_2_digits(ia);
	else if (ac == 6)
		ft_5_digits(ia, ib);
	else if (ac == 4 || ac > 6)
		ft_algo_radix(ia, ib, ac);
}
