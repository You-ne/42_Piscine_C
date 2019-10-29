/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 05:40:08 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/18 15:01:49 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	if (!(c))
		return (1);
	while (charset[i])
		if (charset[i++] == c)
			return (1);
	return (0);
}

char		*ft_strdup(char *src, char *charset)
{
	int		i;
	char	*dest;

	i = 0;
	while (!(is_sep(src[i], charset)))
		i++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (i + 1))))
		return (0);
	i = 0;
	while (!(is_sep(src[i], charset)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int			c_w(char *str, char *charset)
{
	int		words;
	int		i;

	i = 0;
	words = 1;
	while (str[i])
	{
		if (is_sep(str[i], charset) && !(is_sep(str[i + 1], charset)))
			words++;
		i++;
	}
	return (words);
}

char		**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!(str) || !(charset) || !(str[0]) || !(charset[0]))
		return (NULL);
	words = c_w(str, charset);
	if (!(tab = (char**)malloc(sizeof(*tab) * (words + 2))))
		return (NULL);
	while (j < words)
	{
		while (is_sep(str[i], charset))
			i++;
		if (!(tab[j] = ft_strdup(&str[i], charset)))
			return (NULL);
		while (!(is_sep(str[i], charset)))
			i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
