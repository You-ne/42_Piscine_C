/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:39:29 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/24 20:34:29 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int	main(int ac, char **av)
{
	int	ret;
	int	fd;
	char	*line;
	int	n;

	n = 0;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd < 0)
		{
			printf("Erreur lors de l'ouverture du fichier :p\n");
			return (0);
		}
		while ((ret = get_next_line(fd, &line)) == 1)
		{
			n++;
			printf("%d %s\n\n", n, line);
		}
		if (ret == -1)
		{
			printf("Une erreur est survenue lors de l'exécution de GNL...\n\n");
			return (0);
		}
		if (ret == 0)
		{
			printf("L'intégralité du fichier à été lue.\n");
			return (0);
		}
	}
	return (0);
}
