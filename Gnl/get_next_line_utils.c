/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:19:46 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/21 18:44:47 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_len(char *s)
{
	int 	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void		ft_del(char **tab)
{
	if (tab)
	{
		free(*tab);
		*tab = NULL;
	}
}

void		*ft_new(int n)
{
	void	*buf;
	char	*tmp;

	if (!(buf = malloc(n)))
		return (NULL);
	tmp = (char *)buf;
	while (n > 0)
	{
		tmp[n - 1] = '\0';
		n--;
	}
	return (buf);
}

void		ft_cpy(char *s1, char *s2, int n)
{
	while (n > 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
}

char	*ft_strdup(char *src)
{
	int		i;
	char		*dest;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (i + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
