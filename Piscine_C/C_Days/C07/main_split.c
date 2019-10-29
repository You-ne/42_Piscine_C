/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 06:28:24 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/14 07:22:28 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int ac, char **av)
{
	char	**splited;
	int i;

	i = 0;
	if (ac == 3)
	{
		splited = ft_split(av[1], av[2]);
		while (splited[i])
		{
			printf("%s\n", splited[i]);
			i++;
		}
	}
	return (0);
}
