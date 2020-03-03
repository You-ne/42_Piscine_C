/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 22:34:27 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/03 01:00:47 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_p_spec(t_data *d)
{
	d->arg = ft_itoa_base(((uintmax_t)va_arg(*ap, void*)), 16);
	ft_handler_num(d);
	return (0);
}
