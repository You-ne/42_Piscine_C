/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:32:48 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/29 21:29:02 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	char	*strsrc;
	char	*strdst;

	strsrc = (char*)src;
	strdst = (char*)dest;

	if (strsrc < strdst)
	{
		strsrc = strsrc + n - 1;
		strdst = strdst + n - 1;
		while (n > 0)
		{
			*strdst-- = *strsrc--;
			n--;
		}
	}
	else
		while (n > 0)
		{
			*strdst++ = *strsrc++;
			n--;
		}
	return (dest);
}
