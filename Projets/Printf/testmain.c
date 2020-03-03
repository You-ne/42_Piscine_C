/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:20:08 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/03 01:02:28 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char 	*s;
	int	c;
	int	i;
	int	l;

	l = -1;
	i = 0;
	c = -1;
	s = "coucou";
	printf("%d\n", i);
	printf("%*.*d\n", c, l, i);
	return (0);
}
