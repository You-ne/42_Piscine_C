/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:42:49 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/18 21:29:10 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>

char		*reader(int fd);
char		*str_realloc(char *src, long size);
struct		s_rules		parser(char *file);
char		*ft_strdup(char *src, char *charset);
char		**ft_split(char *str, char *charset);
int		check_line(char *line, struct	s_rules rules);
char	**map_maker(char *file, struct	s_rules rules);
char	**grid_maker(int fd);

void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);

struct		s_rules
{
	int		lines;
	char	vide;
	char	obst;
	char	full;
};
# define BUFF_SIZE 32
#endif
