/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:09:54 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/23 00:16:00 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_conv_x(t_data *d)
{
	uintmax_t	arg;

	
	arg = 0;
	if (d->spe == 'x' || d->spe == 'X')
		arg = (uintmax_t)(va_arg)(d->args, unsigned int);
	return (ft_itoa_base(arg, 16));
}

int	ft_x_spec(t_data *d)
{
	d->arg = ft_x_conv(d);
	if (d->spe == 'X')
		ft_toupper(arg);
	ft_handler_num(d);
	return (0);
}
