/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 23:18:22 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/18 14:59:58 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		len(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		total_size(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	int		strs_size;

	total = 0;
	strs_size = 0;
	i = 0;
	while (i < size)
		strs_size += len(strs[i++]);
	total = ((len(sep) * (size - 1)) + strs_size);
	return (total);
}

void	join(int size, char **strs, char *sep, char *dest)
{
	int i;
	int j;
	int k;
	int s;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[k] = strs[i][j];
			j++;
			k++;
		}
		s = 0;
		while (sep[s] && i != size - 1)
		{
			dest[k] = sep[s];
			s++;
			k++;
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size < 1)
	{
		dest = (char *)malloc(sizeof(*dest));
		dest[0] = '\0';
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * (total_size(size, strs, sep) + 1))))
		return (0);
	join(size, strs, sep, dest);
	dest[total_size(size, strs, sep)] = '\0';
	return (dest);
}
