/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 05:40:08 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/19 21:09:58 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int			c_w(char *str, char *charset)
{
	int		words;

	words = 0;
	while (*str)
	{
		while (is_sep(*str, charset) && *str)
			str++;
		if (*str)
		{
			words++;
			while (!(is_sep(*str, charset) && *str))
				str++;
		}
	}
	return (words);
}

int			len_word(char *str, char *charset)
{
	int		len;

	len = 0;
	while (is_sep(*str, charset) && *str)
		str++;
	while (!(is_sep(*str, charset) && *str))
	{
		str++;
		len++;
	}
	return (len);
}

char		*ft_strdup(char *src, char *charset)
{
	int		i;
	char	*dest;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(*dest) * (len_word(src, charset) + 1))))
		return (0);
	i = 0;
	while (!(is_sep(*src, charset)) && *src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char		**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;

	if (!str)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(*tab) * (c_w(str, charset) + 1))))
		return (NULL);
	i = 0;
	while (*str)
	{
		while (is_sep(*str, charset))
			str++;
		if (*str)
		{
			tab[i] = ft_strdup(str, charset);
			i++;
			while (!(is_sep(*str, charset)))
				str++;
		}
	}
	tab[i] = 0;
	return (tab);
}
