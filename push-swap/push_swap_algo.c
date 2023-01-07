/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:36:50 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/19 21:02:03 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_loop(long long *ia, long long *ib, long long testnum, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ac - 1)
	{
		if ((ia[0] | testnum) == testnum)
		{
			ft_pb(ia, ib);
			i++;
		}
		else
			ft_ra(ia);
		j++;
	}
	while (i > 0)
	{
		ft_pa(ia, ib);
		i--;
	}
}

void	ft_algo_radix(long long *ia, long long *ib, int ac)
{
	int	i;

	i = 1;
	while (ft_is_it_sorted(ia) == 0)
	{
		ft_loop(ia, ib, 4294967295 - i, ac);
		i = i * 2;
	}
	if (ib[0] != 0)
	{
		while (ib[0] != 0)
		{
			ft_pa(ia, ib);
		}
		ft_algo_radix(ia, ib, ac);
	}
}
