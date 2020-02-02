/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fregulie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:53:17 by fregulie          #+#    #+#             */
/*   Updated: 2019/09/18 12:21:22 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int ac, char **av)
{
	int lenght;
	int cuts;

	if (ac > 3)
		return (0);
	lenght = 0;
	cuts = nb_of_cuts(av[1], &lenght);
	char **res;
	res = cuts_to_the_tab(av[1], cuts, lenght);
	printf("lenght = %d\n", lenght);
	for (int i = cuts - 1 ; i >= 0 ; --i)
	{
		res[i] = reverse(res[i]);
		printf("The rank is %d and the string correlated %s\n", i, res[i]);
	}
	return (0);
}
