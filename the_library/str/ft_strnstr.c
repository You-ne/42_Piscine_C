/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 03:12:08 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/29 19:38:11 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	unsigned int i;
	char *start;

	start = big;
	i = 0;
	if (!little || little[0] == '\0')
		return (big);
	while (*big && little[i] && (big < start + len))
	{
		i = 0;
		while (big[i] == little[i] && (big[i] && little[i]) &&
			((big + i) < (start + len)))
		{
			if (little[i + 1] == '\0')
				return (big);
			i++;
		}
		big++;
	}
	return (NULL);
}
