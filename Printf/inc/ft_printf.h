/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:19:56 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/01 18:42:04 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


/*
**---------------------------------- Headers -----------------------------------
*/

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/*
**-------------------------------- Structure & Var -----------------------------
*/

typedef struct	s_data
{
	int			ret;
	long long int		prec;
	long long int		width;
	int			padd;
	int			left;
	int			size;
	int			i;

	char			*form;
	char			*buff;
	
	va_list			arg;
}		t_data;

/*
**--------------------------------- Prototypes ---------------------------------
*/

int ft_printf (const char *format, ...);
#endif
