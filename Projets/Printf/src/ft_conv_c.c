/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:25:09 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/23 00:41:19 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_conv_c(t_data)
{
	char[2]		s;
	char		c;

	if (d->spe == 'c')
	{
		c = (unsigned char)(va_arg)(d->args, int);
		s[0] = c;
		s[1] = '\0';
		d->arg = s;
		ft_handler_char(d);
	}
	return (0);
}

int	ft_c_spec(t_data *d)
{
	d->arg = ft_conv_c(d);
	ft_buffing(d->arg[0], d);
	return (0);
}
