/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:14:50 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/04 15:16:16 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*c;
	int		i;

	i = ft_strlen(source) + 1;
	c = malloc(sizeof(char) * i);
	if (!c)
		return (0);
	i = 0;
	while (source[i])
	{
		c[i] = source[i];
		i++;
	}
	c[i] = 0;
	return (c);
}
