/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:19:56 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/22 19:37:43 by yotillar         ###   ########.fr       */
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
# define ZERO	0
# define MINUS	1
# define WIDTH	2
# define PREC	3	
typedef union	u_argd->
{
	int		i;
	char	c;
	char	*s;
	void	*p;
}				t_arg;

typedef	struct	s_spec
{
	char	s;
	int	(*ptr)();
}		t_spec;

// | 0 | - | width | prec |

typedef struct	s_data
{
	int			ret;
	int			flags[NB_FLAGS];
	char 			spe;
	char			*arg;
	char			*frmt;
	int			fi;
	char			buff[128];
	int			bi;
	
	va_list			args;
}		t_data;

/*
**--------------------------------- Prototypes ---------------------------------
*/

int ft_printf (const char *format, ...);
#endif
