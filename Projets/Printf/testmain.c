/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:20:08 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/25 05:45:24 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char 	*s;
	int	i;

	i = 4;
	s = "coucou";
	printf("temoin :  %.s\n", s);
	printf("temoin :  %.10s\n", s);
	printf("temoin :  %0-51-s\n", s);
	return (0);
}
