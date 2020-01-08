/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 01:05:05 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/07 01:14:42 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *memsrc;

	if (!s)
		return (NULL);
	memsrc = (unsigned char*)s;
	while (n > 0 && *memsrc != (unsigned char)c)
	{
		memsrc++;
		n--;
	}
	if (n == 0)
		return (NULL);
	return ((void*)memsrc);
}
