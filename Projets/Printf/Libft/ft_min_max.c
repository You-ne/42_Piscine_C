/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 00:23:40 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/09 00:29:39 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_min(long a, long b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

long		ft_max(long a, long b)
{
	if (a >= b)
		return (a);
	else
		return (b)
}
