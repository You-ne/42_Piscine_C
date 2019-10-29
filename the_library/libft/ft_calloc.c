/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <yotillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:47:29 by yotillar          #+#    #+#             */
/*   Updated: 2019/10/29 20:01:51 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	unsigned long int t_size;
	void	*mem;

	t_size = nmemb * size;
	if (t_size > 2147483647)
		return (NULL);
	else
		if (!(mem = malloc(nmemb * size)))
			return (NULL);
	return (mem);
}
