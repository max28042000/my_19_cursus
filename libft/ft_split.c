/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:59:52 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/07 01:43:36 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlcpy_split(char *dst, const char *src, size_t d, char c)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!d)
		return (src_len);
	while (src[i] != '\0' && i < d && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	if (d < src_len)
		dst[d - 1] = '\0';
	else if (d != 0)
		dst[i] = '\0';
	else if (dst[i] && src[i] == c)
		dst[i] = '\0';
	return (src_len);
}

static int	count_words(char const *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

static char	**ft_free_tab(char **tab)
{
	char	**pos;

	if (tab == 0)
		return (0);
	pos = tab;
	while (*pos != 0)
		free(*(pos++));
	free(tab);
	return (0);
}

static char	*ft_str(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		return (0);
	}
	ft_strlcpy_split(str, s, i + 1, c);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	char		**str;
	const char	*a;

	a = s;
	if (!s)
		return (0);
	str = ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!str)
		return (0);
	i = -1;
	while (++i < count_words(a, c) && s[0] != '\0')
	{
		while (s[0] == c)
			s++;
		str[i] = ft_str(s, c);
		if (!str[i])
			return (ft_free_tab(str));
		s += ft_strlen(str[i]);
	}
	str[i] = 0;
	return (str);
}
