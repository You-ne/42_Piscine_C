/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:41:31 by yotillar          #+#    #+#             */
/*   Updated: 2020/06/10 21:19:38 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_char_minus(t_data *d, size_t len)
{
	int	i;

	i = 0;
	while (i < (int)len && d->arg && d->arg[i] != '\0')
	{
		ft_buffing(d->arg[i++], d);
		d->flags[WIDTH]--;
	}
	while (d->flags[WIDTH]-- > 0)
		ft_buffing(' ', d);
}

void	ft_char_width(t_data *d, size_t len)
{
	int	i;

	i = 0;
	if (!d->arg)
		len = 6;
	if (d->flags[MINUS] == 1)
	{
		ft_char_minus(d, len);
	}
	else
	{
		while (d->flags[WIDTH]-- > (int)len)
			ft_buffing(' ', d);
		while (len-- > 0 && d->arg)
			ft_buffing(d->arg[i++], d);
	}
}
