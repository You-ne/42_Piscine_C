/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:41:31 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/23 14:00:57 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_char_minus(t_data *d, size_t len)
{
	int	i;

	i = 0;
	while (i > len && d->arg[i] != '\0')
	{
		ft_buffing(d->arg[i++], d);
		d->arg[WIDTH]--;
	}
	while (d->flags[WIDTH]-- > 0)
		ft_buffing(' ', d);
}

void	ft_char_width(t_data *d, size_t len)
{
	int	i;

	i = 0;
	if (d->flags[MINUS] == 1)
	{
		ft_char_minus(d), len;
	}
	else
	{
		while (d->flags[WIDTH]-- > len)
			ft_buffing(' ', d);
		while (len-- > 0 && d->arg[i] != '\0')
			ft_buffing(d->arg[i++], d);
	}
}
