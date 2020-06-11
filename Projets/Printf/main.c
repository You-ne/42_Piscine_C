/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:20:08 by yotillar          #+#    #+#             */
/*   Updated: 2020/06/10 00:59:48 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./inc/ft_printf.h"

int	main(void)
{
	int	ret;
	char	*s;

	s = NULL;
	printf("///Vrai Printf///\n");
	printf("hello, %s.", s);
	printf("\n");
	ret = ft_printf("hello, %s.", s);
	printf("\n");
	printf("Ret: %d\n\n", ret);

	return (0);
}
