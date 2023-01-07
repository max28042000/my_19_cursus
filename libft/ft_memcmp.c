/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:51:40 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/04 11:02:52 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	int					i;

	i = 0;
	p1 = (const unsigned char *)pointer1;
	p2 = (const unsigned char *)pointer2;
	while (size > 0)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
		size--;
	}
	return (0);
}
