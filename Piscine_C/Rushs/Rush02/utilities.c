/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 23:52:53 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/18 12:18:06 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (0);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	size = 0;
	i = 0;
	while (src[i])
	{
		if (src[i] != 32)
			size++;
		i++;
	}
	if (!(dest = (char *)malloc(sizeof(*dest) * (size + 1))))
		return (0);
	i = 0;
	size = 0;
	while (src[i])
	{
		if (src[i] != 32)
			dest[size++] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
