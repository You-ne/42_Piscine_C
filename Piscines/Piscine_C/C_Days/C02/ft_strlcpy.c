/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 18:15:32 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/05 03:26:18 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int res;
	unsigned int i;

	res = 0;
	i = 0;
	while (src[res])
		res++;
	while (src[i] && i + 1 < size)
	{
			dest[i] = src[i];
			i++;
	}
	dest[i] = '\0';
	return (res);
}
