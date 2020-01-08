/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:32:48 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/07 23:53:54 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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
