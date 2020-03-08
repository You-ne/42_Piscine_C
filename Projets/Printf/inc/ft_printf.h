/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:19:56 by yotillar          #+#    #+#             */
/*   Updated: 2020/03/09 00:05:12 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


/*
**---------------------------------- Headers -----------------------------------
*/

# include "../Libft/libft.h"
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
# define FMT d->frmt
# define FI d->fi

typedef	struct	s_spec
{
	char	c;
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

int		ft_printf (const char *format, ...);
int		ft_dispatch(t_data *d);
void	ft_buffing(char c, t_data *d);
void	ft_display(t_data *d);
void	ft_end(t_data *d);

void	ft_init(t_data *d);
void	ft_initialize_specs(t_spec *specs);
void	ft_check_initialize(t_data *d);

int		ft_check(t_data *d);
void	ft_check_flags(t_data *d);
void	ft_check_width(t_data *d);
void	ft_check_prec(t_data *d);

void	ft_handler_char(t_data *d);
void	ft_handler_num(t_data *d);

void	ft_num_width(t_data *d);
void	ft_num_minus(t_data *d, size_t len);
void	ft_num_zero(t_data *d, size_t len);
void	ft_num_only_prec(t_data *d);

void	ft_char_minus(t_data *d, size_t len);
void	ft_char_width(t_data *d, size_t len);

int		ft_c_spec(t_data *d);
int		ft_conv_c(t_data *d);

int		ft_d_spec(t_data *d);
char	*ft_d_conv(t_data *d);

int		ft_p_spec(t_data *d);

int		ft_s_spec(t_data *d);

int		ft_u_spec(t_data *d);
char*	ft_conv_u(t_data *d);

int		ft_x_spec(t_data *d);
char	*ft_conv_x(t_data *d);

#endif
