/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:36:23 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/19 17:24:35 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc(long long *ia, long long *ib)
{
	if (!ia && !ib)
		ft_putstr("Error");
	else if (!ib)
	{
		ft_putstr("Error");
		free (ia);
	}
	else if (!ia)
	{
		ft_putstr("Error");
		free (ib);
	}
}
