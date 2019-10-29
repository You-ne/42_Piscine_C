/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 00:46:17 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/07 00:57:06 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*memdest;
	char	*memsrc;

	memdest = (char*)dest;
	memsrc = (char*)src;
	while(n > 0 && *memsrc != c)
	{
		*memdest++ = *memsrc++;
		n--;
	}
	if(n > 0)
	{
		*memdest++ = *memsrc++;
		return ((void*)memdest);
	}
	else
		return (NULL);
}
