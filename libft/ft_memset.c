/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:52:16 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/04 14:56:37 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	char	*c;
	size_t	i;

	c = (char *)ptr;
	i = 0;
	while (i < count)
	{
		c[i] = value;
		i++;
	}
	return (ptr);
}
