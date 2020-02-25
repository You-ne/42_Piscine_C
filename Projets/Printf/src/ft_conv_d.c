/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:11:48 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/22 21:32:39 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_d_conv(d)
{
	intmax_t	arg;

	arg = 0;
	if (d->spe == 'd' || d->spe == 'i')
		arg = (intmax_t)(va_arg(d->args, int));
	return (ft_itoa_base(arg, 10));
}

int	ft_d_spec(d)
{
	d->arg = ft_d_conv(d);
	ft_handler_num(d);
	return (0);
}
