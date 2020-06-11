/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specials.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 20:35:00 by yotillar          #+#    #+#             */
/*   Updated: 2020/06/10 20:50:42 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

void	ft_null(t_data *d)
{
	ft_buffing('(', d);
	ft_buffing('n', d);
	ft_buffing('u', d);
	ft_buffing('l', d);
	ft_buffing('l', d);
	ft_buffing(')', d);
}
