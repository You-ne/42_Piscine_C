/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 23:11:22 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/18 20:09:30 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char		*str_realloc(char *src, long size)
{
	char	*dest;
	long	i;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(*dest) * size)))
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';
	free(src);
	return (dest);
}

char		*reader(int fd)
{
	long	len;
	int		ret[2];
	char	buff[BUFF_SIZE + 1];
	char	*dest;

	len = 1024;
	if (!(dest = (char *)malloc(sizeof(*dest) * len)))
		return (NULL);
	dest[0] = '\0';
	while ((ret[0] = read(fd, buff, BUFF_SIZE)))
	{
		buff[ret[0]] = '\0';
		ret[1] += ret[0];
		if (ret[1] >= len)
			if (!(dest = realloc(dest, (len *= 2))))
				return (NULL);
		ft_strcat(dest, buff);
	}
	return (dest);
}

t_dict		*tab_to_dict(char **tab)
{
	int		i;
	int		j;
	int		size;
	t_dict	*dic;

	size = 0;
	i = 0;
	j = 0;
	while (tab[size] != NULL)
		size++;
	if (!(dic = (t_dict *)malloc(sizeof(*dic) * (size / 2 + 1))))
		return (NULL);
	while (tab[i] != NULL)
	{
		if (i == 0 || i % 2 == 0)
		{
			dic[j].nb = ft_strdup(tab[i]);
			i++;
		}
		if (i % 2 != 0)
			dic[j].wd = ft_strdup(tab[i]);
		j++;
		i++;
	}
	return (dic);
}

t_dict		*dict_maker(int fd)
{
	char	*file;
	char	**tab;
	t_dict	*dic;
	int		i;

	i = 0;
	file = reader(fd);
	tab = ft_split(file, ":\n");
	dic = tab_to_dict(tab);
	return (dic);
}
