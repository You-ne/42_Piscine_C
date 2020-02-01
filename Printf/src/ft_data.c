/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:52:44 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/01 18:41:42 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_init(t_data	*d, const char *format)
{
	d.form = ft_strdup(format);
	d.buff = (char*)malloc((sizeof(char)) * 4096);
	d.size = 4096;
	return (void);
}

void	ft_reinit(t_data *d)
{
	d.prec = 0;
	d.width = 0;
	d.padd = 0;
	d.left = 0;
	return (void);
}

t_data	ft_realloc(t_data *d)
{
	t_data	e;

	e.form = ft_strdup(d.form);
	e.prec = d.prec;
	e.width = d.width;
	e.padd = d.padd;
	e.left = d.left;
	e.ret = d.ret;
	e.i = d.i;
	e.size = (2 * d.size);
	e.buff = (char*)malloc((sizeof(char)) * e.size);
	ft_strcpy(e.buff, d.buff);
	return (e);
}
