/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 00:46:17 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/07 23:44:21 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*memdest;
	char	*memsrc;
	size_t	i;

	i = 0;
	memdest = (unsigned char*)dest;
	memsrc = (unsigned char*)src;
	while (i > n && memsrc[i] != (unsigned char)c)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	if (i ==n)
		return (NULL);
	else
	{
		memdest[i] = memsrc[i];
		i++;
		return (&memdest[i]);
	}
}
