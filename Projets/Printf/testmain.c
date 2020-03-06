/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:20:08 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/05 18:21:09 by yotillar         ###   ########.fr       */
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
	c = 98;
	s = "coucou";

	printf("%.c\n", c);
	printf("%.2s\n", s);
	printf("%.0c\n", c);
	printf("%c\n", c);
	return (0);
}
