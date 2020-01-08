/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:15:57 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/29 19:22:09 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*strrchr(const char *s, int c)
{
	char	*str;
	
	str = s;
	while (*str)
		str++;
	if (c == 0)
		return (str);
	else
		while (str >= s)
		{
			if (*str == c)
				return (str);
			str--;
		}
	return (NULL);
}
