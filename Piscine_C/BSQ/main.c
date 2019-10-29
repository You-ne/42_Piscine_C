/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:32:27 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/18 21:41:59 by yotillar         ###   ########.fr       */
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

struct	s_rules		parser(char *file)
{
	struct	s_rules		rules;
	int		i;
	int		j;

	rules.lines = ft_atoi(file);
	while (*file > 47 && *file < 58)
		file++;
	rules.vide = *file;
	file++;
	rules.obst = *file;
	file++;
	rules.full = *file;
	return (rules);
}

int		main(int ac, char **av)
{
	int			fd;
	int			i;
	char		*file;
	struct	s_rules		rules;
	char		**map;

	i = 0;
	if (ac == 1)
		map = map_maker(reader(0), parser(reader(0)));
		if (ac > 1)
	{
		while (++i < ac)
		{
			if ((fd = open(av[i], O_RDONLY)) != -1)
			{
				file = reader(fd);
				rules = parser(file);
				map = map_maker(file, rules);
				if (!(map))
					ft_putstr("map error");
				/*algo(map, rules);*/
			}
		}
	}
	return (0);
}
