/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 17:36:11 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/09 00:04:01 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_initialize_specs(t_spec *specs)
{
	specs[0].c = 'd';
	specs[0].ptr = &ft_d_spec ;
	specs[1].c = 'i';
	specs[1].ptr = &ft_d_spec ;
	specs[2].c = 'u';
	specs[2].ptr = &ft_u_spec ;
	specs[3].c = 'c';
	specs[3].ptr = &ft_c_spec ;
	specs[4].c = 's';
	specs[4].ptr = &ft_s_spec ;
	specs[5].c = 'p';
	specs[5].ptr = &ft_p_spec ;
	specs[6].c = 'x';
	specs[6].ptr = &ft_x_spec ;
	specs[7].c = 'X';
	specs[7].ptr = &ft_x_spec ;
	specs[8].c = '0';
	specs[8].ptr = NULL;
}

//void	ft_end(t_data *d)


int		ft_dispatch(t_data *d)
{
	int			i;
	t_spec			specs[NB_SPECS + 1];

	if (ft_check(d) == -1)
		return (-1);
	ft_initialize_specs(specs);
	d->arg = NULL;
	d->spe = FMT[FI];
	i = 0;
	while (specs[i].c != d->spe && specs[i].c != 0)
		i++;
	//if (specs[i].c == 0)
	//	return (ft_undef_spec(d));
	return (specs[i].ptr(d));
			//gérer erreurs quand mauvais spec
}

int		ft_printf(const char *format, ...)
{
	t_data				d;
	unsigned long		i;
	int					bi2;
	i = 0;

	ft_init(&d);
	va_start(d.args, format);
	while (format[i] != '\0')
	{
		bi2 = -1;
		if (format[i] == '%')
		{
			bi2 = d.bi;
			d.frmt = (char*)&format[++i];
			if (ft_dispatch(&d) == -1)
				break;
			i += d.fi;
		}
		if (bi2 == d.bi)
			ft_buffing('%', &d);
		while (format[i] != '%' && format[i] != '\0')
        		ft_buffing(format[i++], &d);
	}
	if (d.bi > 0)
		ft_display(&d);
	va_end(d.args);
	return (d.ret);
}
