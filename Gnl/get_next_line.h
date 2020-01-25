/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:07:41 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/21 18:44:56 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	get_next_line(int fd, char **line); 
int	ft_len(char *s);
void	ft_del(char **tab);
void	*ft_new(int n);
void	ft_cpy(char *s1, char *s2, int n);
char	*ft_strdup(char *str);

#endif
