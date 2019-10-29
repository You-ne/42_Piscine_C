/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 03:06:16 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/07 03:09:48 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			res;
	char			*d;

	d = dest;
	while (*d && d < dest + size)
		d++;
	while (*src && (d < dest + size - 1))
		*d++ = *src++;
	res = d - dest;
	if (d < dest + size)
		*d = '\0';
	while (*src++)
		res++;
	return (res);
}
