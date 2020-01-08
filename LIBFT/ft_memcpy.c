/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 00:26:16 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/07 00:57:40 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*memsrc;
	char		*memdest;

	memdest = dest;
	memsrc = src;

	while(n-- > 0)
		*memdest++ = *memsrc++;
	return (dest);
}
