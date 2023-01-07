/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:54:39 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/04 19:36:45 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*dest;
	const char	*src;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len--)
	{
		dest = haystack;
		src = needle;
		while (*src != '\0' && *src == *dest && dest - haystack <= (long)len)
		{
			dest++;
			src++;
			if (*src == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
