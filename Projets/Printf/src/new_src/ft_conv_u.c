/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:20:01 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/23 00:15:56 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_conv_u(t_data *d)
{
	uintmax_t	arg;

	arg = 0;
	if (d->spe = 'u')
		arg = (uintmax_t)(va_arg(d->args, unsigned int));
	return (ft_itoa_base(arg, 10));
}

int	ft_u_spec(t_data *d)
{
	d->arg = ft_u_conv(d);
	ft_handler_num(d);
	return (0);
}
