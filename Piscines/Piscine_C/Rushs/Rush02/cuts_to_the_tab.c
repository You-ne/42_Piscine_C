/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cuts_to_the_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:01:10 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/15 23:18:25 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		is_numeric(char *str)
{
	int i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

char	**cuts_to_the_tab(char *str, int nb_cuts, int lenght)
{
	int		i;
	int		j;
	int		k;
	char	**cuts;

	if (!(cuts = (char **)malloc(sizeof(char *) * nb_cuts + 1)))
		return (0);
	i = lenght - 1;
	k = 0;
	while (k <= nb_cuts - 1)
	{
		if (!(cuts[k] = (char *)malloc(sizeof(char) * 4)))
			return (0);
		j = 0;
		while (j < 3 && i >= 0)
		{
			cuts[k][j] = str[i];
			i--;
			j++;
		}
		cuts[k][j] = 0;
		k++;
	}
	cuts[k] = 0;
	return (cuts);
}

int		nb_of_cuts(char *str, int *lenght)
{
	int		size;
	int		count;
	int		modulo;

	if (!is_numeric(str))
	{
		ft_putstr("Error");
		return (0);
	}
	size = 0;
	count = 0;
	while (str[size])
		size++;
	*lenght = size;
	modulo = size % 3;
	size /= 3;
	if (modulo == 1 || modulo == 2)
		size += 1;
	return (size);
}

char	*reverse(char *str)
{
	int		start;
	int		end;
	int		lenght;
	char	*tmp;

	start = 0;
	lenght = 0;
	while (str[lenght])
		lenght++;
	end = lenght - 1;
	tmp = (char *)malloc(sizeof(char) * lenght);
	while (start < lenght)
	{
		tmp[start] = str[end];
		start++;
		end--;
	}
	tmp[start] = 0;
	return (tmp);
}
