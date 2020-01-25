/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:32:45 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/24 20:36:08 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_join(char *tab, char *buf)
{
	int 	i;
	int 	j;
	char	*ptr;

	i = 0;
	j = 0;
	if (tab)
		i = ft_len(tab);
	if (buf)
		j = ft_len(buf);
	ptr = (char*)malloc(sizeof(char) * ( i + j + 1));
	ft_cpy(ptr, tab, i);
	ft_cpy(ptr + i, buf, j);
	ptr[i + j] = '\0';
	free(tab);
	return (ptr);
}

static int	ft_end(char *tab)
{
	int 	count;

	count = 0;
	while (tab[count] && tab[count] != '\n')
		count++;
	if (tab[count] == '\n')
	{
		tab[count] = '\0';
		return (count);
	}
	return (-1);
}

static int	ft_test(char **tab, char **buf, char **line)
{
	char	*tmp;
	int	final;

	*tab = ft_join(*tab, *buf);
	final = ft_end(*tab);
	if (final > -1)
	{
		*line = ft_strdup(*tab);
		tmp = *tab;
		*tab = ft_strdup((*tab + final + 1));
		free(tmp);
		return (1);
	}
	return (0);
}

int		get_next_line(int fd, char **line)
{
	int		res;
	char		*b; 
	static char	*tab[1000];

	b = ft_new(BUFFER_SIZE + 1);
	if (BUFFER_SIZE < 1 || fd < 0 || !line || (res = read(fd, b, 0)) < 0)
		return (-1);
	while ((res = read(fd, b, BUFFER_SIZE)) > 0)
	{
		b[res] = '\0';
		res = ft_test(&tab[fd], &b, line);
		free(b);
		if (res == 1)
			return (1);
		b = ft_new(BUFFER_SIZE + 1);
	}
	if ((res = ft_test(&tab[fd], &b, line)) == 1)
		return (1);
	else if (ft_len(tab[fd]) > 0)
	{
		*line = ft_strdup(tab[fd]);
		return (1);
		ft_del(&tab[fd]);
	}
	return (0);
}

