/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 06:29:15 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/09 14:29:16 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	res;
	char			*i;

	i = dest;
	while (*i && i < dest + size)
		i++;
	while (*src && (i < dest + size - 1))
		*i++ = *src++;
	res = i - dest;
	if (i < dest + size)
		*i = '\0';
	while (*src++)
		res++;
	return (res);
}
