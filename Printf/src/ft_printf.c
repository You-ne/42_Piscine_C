/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:36:11 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/01 21:14:06 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_data	d;

	ft_init(&d, format);
	va_start(d.arg, format);
	
	if (ft_read(&d) == 1)
	{

	}

	va_end(d.arg);
	return (d.ret)
}
