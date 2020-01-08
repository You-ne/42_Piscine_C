/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:09:27 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/29 19:15:37 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (*s);
		s++;
	}
	if (c == 0)
		return (*s);
	else
		return (NULL);
}
