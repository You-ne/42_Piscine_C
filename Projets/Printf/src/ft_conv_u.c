/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:20:01 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/29 03:44:21 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_conv_u(t_data *d)
{
	unsigned int arg;

	arg = 0;
	if (d->spe =='u')
		arg = (unsigned int)(va_arg(d->args, unsigned int));
	return (ft_itoa_base(arg, 10, 0));
}

int	ft_u_spec(t_data *d)
{
	d->arg = ft_conv_u(d);
	ft_handler_num(d);
	return (0);
}
