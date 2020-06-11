/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_ft_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 00:23:40 by yotillar          #+#    #+#             */
/*   Updated: 2020/04/23 23:59:18 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

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
		return (b);
}
