/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:15:32 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/04 17:15:10 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int res;

	res = 0;
	while (src[res])
	{
		if (res + 1 < size)
			dest[res] = src[res];
		if (res + 1 == size)
			dest[res] = '\0';
		res++;
	}
	return (res);
}
