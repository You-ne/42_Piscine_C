/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:02:53 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/22 21:16:28 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_buffing(char c, t_data *d)
{
	while (len > 0)
	{
		while (len > 0 && d->b_i < 127)
		{
			d->buff[d->b_i] = *str;
			d->b_i++;
			str++;
			len--;
		}
		if (d->b_i == 127)
		{
			write(1, &d->buff, 127);
			d->ret += 127;
			while (d->b_i > 0)
			{
				d->buff[d->b_i] = '\0';
				d->b_i--;
			}
		}
	}
}
