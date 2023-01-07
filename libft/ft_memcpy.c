/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:51:50 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/04 11:02:53 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destc;
	char	*srcc;
	size_t	i;

	destc = (char *)dest;
	srcc = (char *)src;
	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (destc);
}
