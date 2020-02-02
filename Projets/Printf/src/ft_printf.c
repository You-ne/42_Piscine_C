/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:36:11 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/02 05:43:41 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"


void	ft_dispatch(const char *format, t_data *d)
{
	static char		conv[NB_SPECS] = {'c', 's', 'p', 'd', 'i', 'u', 'x', 'X'}
	static char		*(*TabF[NB_SPECS])(t_specs) =
}

int		ft_printf(const char *format, ...)
{
	t_data				d;
	unsigned long		i;

	i = -1;
	ft_init(&d);
	va_start(d.arg, format);
	while (format[++i])
	{
		if (format[i] != '%')
			ft_buffing(&format[i], &d, 1);
		if (format[i] == '%')
		{
			ft_dispatch(&format[i], &d);
			i += d.f_i;
		}
	}
	ft_display
	va_end(d.arg);
	return (d.ret)
}
