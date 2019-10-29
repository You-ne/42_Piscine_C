/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 22:50:07 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/15 23:12:07 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# define BUFF_SIZE 128
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_dictionnary_entry
{
	char			*nb;
	char			*wd;
}					t_dict;
void				ft_putstr(char *str);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strcat(char *dest, char *src);
char				*ft_strdup(char *src);
char				**ft_split(char *str, char *charset);
t_dict				*dict_maker(int fd);
int					is_numeric(char *str);
char				*reverse(char *str);
int					nb_of_cuts(char *str, int *lenght);
char				**cuts_to_the_tab(char *str, int nb_cuts, int lenght);

#endif
