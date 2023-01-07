/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:17:29 by mahommel          #+#    #+#             */
/*   Updated: 2022/03/15 10:48:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*c;

	i = 0;
	if (!s)
		return (0);
	else if (!f)
		return (0);
	c = ft_strdup(s);
	if (!c)
		return (0);
	while (s[i])
	{
		c[i] = (*f)(i, s[i]);
		i++;
	}
	return (c);
}
