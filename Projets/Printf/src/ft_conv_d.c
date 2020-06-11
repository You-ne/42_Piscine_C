/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:11:48 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/23 02:04:09 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_d_conv(t_data *d)
{
	intmax_t	arg;
	int		neg;

	neg = 0;
	arg = 0;
	if (d->spe == 'd' || d->spe == 'i')
		arg = (intmax_t)(va_arg(d->args, int));
	if (arg < 0)
	{
		neg = 1;
		arg *= -1;
	}
	return (ft_itoa_base(arg, 10, neg));
}

int	ft_d_spec(t_data *d)
{
	d->arg = ft_d_conv(d);
	ft_handler_num(d);
	return (0);
}
