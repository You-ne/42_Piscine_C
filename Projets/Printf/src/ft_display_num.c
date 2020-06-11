/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:51:19 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/15 04:49:01 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void		ft_num_only_prec(t_data *d)
{
	size_t	i;
	size_t	len;
	size_t	len_pad;

	i = 0;
	len = ft_strlen(d->arg);
	len_pad = d->flags[PREC] - len;
	while (len_pad-- > 0)
		ft_buffing('0', d);
	while (len-- > 0)
		ft_buffing(d->arg[i++], d);
}

void		ft_num_zero(t_data *d, size_t len)
{
	size_t	i;
	size_t	len_pad;

	i = 0;
	len_pad = d->flags[WIDTH] - len;
	while (len_pad-- > 0)
		ft_buffing('0', d);
	while (len-- > 0)
		ft_buffing(d->arg[i++], d);
}

void		ft_num_minus(t_data *d, size_t len)
{
	size_t	i;
	size_t	len_pad;

	i  = 0;
	len_pad = d->flags[WIDTH] - ft_max((d->flags[PREC]), (len));
	d->flags[0] = 0;
	while (d->flags[PREC]-- > (int)len)
		ft_buffing('0',d);
	while (len-- > 0)
		ft_buffing(d->arg[i++], d);
	while (len_pad-- > 0)
		ft_buffing(' ', d);
}

void		ft_num_width(t_data *d)
{
	size_t	len;
	size_t		i;

	i = 0;
	len = ft_strlen(d->arg);
	if ((int)len < d->flags[WIDTH])
	{
		if (d->flags[MINUS] == 1)
			ft_num_minus(d, len);
		else if (d->flags[ZERO] == 1 && d->flags[PREC] < 0)
			ft_num_zero(d, len);
		else
		{
			while (d->flags[WIDTH]-- > ft_max((d->flags[PREC]),(len)))
				ft_buffing(' ', d);
			while (d->flags[PREC]-- > (int)len)
				ft_buffing('0', d);
			while (i < len)
				ft_buffing(d->arg[i++], d);
		}
	}
	else
		while (i < len)
			ft_buffing(d->arg[i++], d);
}
