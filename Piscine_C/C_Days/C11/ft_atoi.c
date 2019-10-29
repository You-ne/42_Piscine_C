/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 07:06:19 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/19 22:35:45 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "lib.h"

int		ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (*str > 8 && *str < 14)
		str++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	if (*str == '-')
		return (-res);
	return (res);
}
