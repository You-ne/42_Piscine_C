/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 03:41:32 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/06 22:09:04 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>


# define FALSE 0
# define TRUE !FALSE
# define FT_MAX(x, y) (x) > (y) ? (x) : (y)
# define FT_MIN(x, y) (x) < (y) ? (x) : (y)

typedef	struct		s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;

#endif
