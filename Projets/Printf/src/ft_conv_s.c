/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:03:12 by yotillar          #+#    #+#             */
/*   Updated: 2020/06/10 21:18:21 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_s_spec(t_data *d)
{
	d->arg = va_arg(d->args, char*);
	if (!d->arg)
		d->arg = ft_strdup("(null)");
	ft_handler_char(d);
	return (0);
}
