/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 03:12:08 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/07 03:14:44 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	unsigned int i;

	i = 0;
	if (!needle || needle[0] == '\0')
		return (haystack);
	while (*haystack && needle[i])
	{
		i = 0;
		while (haystack[i] == needle[i] && (haystack[i] && needle[i]))
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
