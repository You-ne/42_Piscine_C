/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin </var/spool/mail/ivann>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 20:42:13 by marvin            #+#    #+#             */
/*   Updated: 2019/10/29 21:29:41 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char*)s;
	
	while(n-- > 0)
		*p = (unsigned char)c;
	return (s);
}
