/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_actions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:36:41 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/03 13:36:42 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(long long *ia, long long *ib)
{
	int	m;
	int	i;

	i = 0;
	m = ib[0];
	while (ib[i] != 0 || ib[i + 1] != 0)
	{
		ib[i] = ib[i + 1];
		i++;
	}
	i = 0;
	while (ia[i])
		i++;
	while (i > 0)
	{
		ia[i] = ia[i - 1];
		i--;
	}
	ia[i] = m;
	ft_putstr("pa");
}

void	ft_pb(long long *ia, long long *ib)
{
	int	m;
	int	i;

	i = 0;
	m = ia[0];
	while (ia[i] != 0 || ia[i + 1] != 0)
	{
		ia[i] = ia[i + 1];
		i++;
	}
	i = 0;
	while (ib[i] != 0 || ib[i + 1] != 0)
		i++;
	while (i > 0)
	{
		ib[i] = ib[i - 1];
		i--;
	}
	ib[i] = m;
	ft_putstr("pb");
}

void	ft_ra(long long *ia)
{
	int	m;
	int	i;

	m = ia[0];
	i = 0;
	while (ia[i] != 0 || ia[i + 1] != 0)
	{
		ia[i] = ia[i + 1];
		i++;
	}
	ia[i - 1] = m;
	ft_putstr("ra");
}
