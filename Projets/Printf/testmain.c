/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:20:08 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/02 03:45:35 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int n;

	n = 30;
	printf("Test du printf:  %0d\n", n);
	printf("Test du printf:  %0.d\n", n);
	printf("Test du printf:  %05.5d\n", n);
	printf("Test du printf:  %0.5d\n", n);
	return (0);
}
