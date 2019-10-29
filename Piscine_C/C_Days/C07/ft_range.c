/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:12:25 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/17 15:19:01 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;
	int len;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	if (!(range = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	while (i < len)
		range[i++] = min++;
	return (range);
}
