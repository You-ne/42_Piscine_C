/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:29:41 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/23 17:24:20 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void		ft_handler_char(t_data *d)i
{
	int	i;
	size_t	len;

	i = 0;
	if (d->flags[PREC] > 0) // troncaturer direct dans arg
		len = MIN((ft_strlen(d->arg))(d->flags[PREC]));
	else
		len = ft_strlen(d->arg);
	if (d->flags[WIDTH] > len)
		ft_char_width(d, len);
	else 
		while (i < len)
			ft_buffing(d->arg[i++], d);
}

void		ft_handler_num(t_data *d)
{
	int	i;

	i = -1;
	if (d->flags[PREC] >= 0 && d->flags[PREC] >= d->flags[WIDTH])
		ft_num_only_prec(d);
	else if (d->flags[WIDTH] > 0)
		ft_num_width(d);
	while (d->arg[++i] != '\0' && d->flags[WIDTH] == 0 
				&& d->flags[PREC] == 0)
		ft_buffing(d->arg[i], d);
	ft_end(d);
}

