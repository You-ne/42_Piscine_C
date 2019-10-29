/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:32:48 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/29 19:03:37 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	char	*strsrc;
	char	*strdst;

	strsrc = (char*)src;
	strdst = (char*)dst;

	if (strsrc < strdst)
	{
		strsrc = strsrc + len - 1;
		strdst = strdst + len - 1;
		while (len > 0)
		{
			*strdst-- = *strsrc--;
			len--;
		}
	}
	else
		while (len > 0)
		{
			*strdst++ = *strsrc++;
			len--;
		}
	return (dst);
}
