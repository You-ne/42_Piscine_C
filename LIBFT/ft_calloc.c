/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:47:29 by yotillar          #+#    #+#             */
/*   Updated: 2020/01/07 22:43:33 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;
	
	i = 0;
	if (count == 0 || size == 0 || size * count > 2147483647)
		return (NULL);
	if (!(mem = malloc(count * size)))
		return (NULL);
	while (i < count)
	{
		((char *)mem)[i] = 0;
		i++;
	}
	return (mem);
}
