/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:09:54 by yotillar          #+#    #+#             */
/*   Updated: 2020/04/24 00:12:32 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_x_conv(t_data *d)
{
	unsigned int	arg;

	
	arg = 0;
	if (d->spe == 'x' || d->spe == 'X')
		arg = (unsigned int)va_arg(d->args, unsigned int);
	return (ft_itoa_base2(arg, 16));
}

int	ft_x_spec(t_data *d)
{
	int 	i;
	d->arg = ft_x_conv(d);
	if (d->spe == 'X')
	{
		i = -1;
		while (d->arg[++i])
			if (d->arg[i] > 96 && d->arg[i] < 123)
				d->arg[i] -= 32;
	}
	ft_handler_num(d);
	return (0);
}
