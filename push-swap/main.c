/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:36:16 by maxhomme          #+#    #+#             */
/*   Updated: 2022/12/19 21:37:55 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	long long	*ia;
	long long	*ib;

	if (ft_input_checker(ac, av) == 0)
		return (0);
	ia = malloc((ac) * sizeof(long long));
	ib = malloc((ac) * sizeof(long long));
	if (!ia || !ib)
	{
		ft_malloc(ia, ib);
		return (0);
	}
	if (ft_places_value(ia, ib, ac, av) == -1)
	{
		ft_putstr("Error");
		free (ia);
		free (ib);
		return (0);
	}
	ft_wich_algo(ia, ib, ac);
	free (ia);
	free (ib);
}
