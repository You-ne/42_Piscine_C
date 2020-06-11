/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 22:34:27 by yotillar          #+#    #+#             */
/*   Updated: 2020/04/24 00:12:59 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_p_conv(t_data *d)
{
	uintmax_t	num;
	num = (uintmax_t)va_arg(d->args, void*);
	d->arg = ft_itoa_base2(num, 16);
	return;
}
int		ft_p_spec(t_data *d)
{
	int		i;
	char 		*str;
	
	ft_p_conv(d);
	str = d->arg;
	if (!(d->arg = malloc(ft_strlen(str + 3))))
		return (0);
	d->arg[0] = '0';
	d->arg[1] = 'x';
	i = -1;
	while (str[++i])
	{
		d->arg[i + 2] = str[i];
	}
	d->arg[i + 2] = '\0';
	free(str);
	ft_handler_num(d);
	return (0);
}
