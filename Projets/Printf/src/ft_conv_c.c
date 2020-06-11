/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:25:09 by yotillar          #+#    #+#             */
/*   Updated: 2020/04/21 18:03:52 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_conv_c(t_data *d)
{
	char		*s;
	char		c;

	if (!(s = (char*)malloc(2)))
		return (0);
	c = (unsigned char)va_arg(d->args, int);
	s[0] = c;
	s[1] = '\0';
	d->arg = s;
	ft_handler_char(d);
	return (0);
}

int	ft_c_spec(t_data *d)
{
	ft_conv_c(d);
	return (0);
}
