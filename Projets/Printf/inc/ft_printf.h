/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:19:56 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/02 05:43:51 by yotillar         ###   ########.fr       */
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
**-------------------------------- Structure & Define --------------------------
*/

# define NB_SPECS 8
# define NB_FLAGS 4

typedef union	u_specs
{
	int		i;
	char	*s;
	void	*p;
}				t_specs;

typedef struct	s_data
{
	int			ret;
	long long int		prec;
	long long int		wid;
	int			pad;
	int			left;
	int			f_i;
	int			b_i;
	char			buff[128];
	
	va_list			arg;
}		t_data;

/*
**--------------------------------- Prototypes ---------------------------------
*/

int ft_printf (const char *format, ...);
#endif
