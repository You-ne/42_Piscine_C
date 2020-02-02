/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:07:41 by yotillar          #+#    #+#             */
/*   Updated: 2020/02/02 00:39:34 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int					get_next_line(int fd, char **line);
unsigned long		ft_len(char *s);
int					ft_end(char *tab);
int					ft_test(char ** tab, char **buff, char **line);

void				ft_del(char **tab);
void				ft_new(void **buf, int n);
void				ft_cpy(char *s1, char *s2, unsigned long n);

char				*ft_strdup(char *src);
char				*ft_join(char *tab, char *buf);

#endif
