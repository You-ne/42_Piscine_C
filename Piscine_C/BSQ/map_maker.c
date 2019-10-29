/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_maker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:43:57 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/18 21:41:15 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		check_line(char *line, struct	s_rules rules)
{
	int i;
	int j;

	i = 0;
	while (line[i])
	{
		if (line[i] != rules.vide && line[i] != rules.obst)
		{
			return (-1);
		}
		i++;
	}
	return (i);
}

char	**map_maker(char *file, struct	s_rules rules)
{
	char **map;
	int i;
	int len;

	i = 1;
	map = ft_split(file, "\n");
	len = check_line(map[1], rules);
	while (map[i])
	{
		if (check_line(map[i], rules) == -1 ||
				check_line(map[i], rules) != len)
			return (NULL);
		i++;
	}
	if (i - 1 != rules.lines)
		return (NULL);
	return (map);
}
