/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:52:44 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/02 06:21:49 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"


void	ft_init(t_data *d)
{
	d->b_i = 0;
	while (d->b_i < 128)
	{
		d->buff[d->b_i] = '\0';
		d->b_i++;
	}
	d->prec = 0;
	d->wid = 0;
	d->pad = 0;
	d->left = 0;
	d->b_i = 0;
	d->f_i = 0;
	return;
}


