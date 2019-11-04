/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 03:41:32 by yotillar          #+#    #+#             */
/*   Updated: 2019/11/01 21:04:19 by yotillar         ###   ########.fr       */
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

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s,, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);


size_t	ft_strlen(const char *s);

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);

void	ft_putchar(char c);
void	ft_putchar_fd(char , int fd);
#endif
