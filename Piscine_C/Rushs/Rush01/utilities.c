/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:09:38 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/08 21:32:48 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_init(int grid[4][4], int clues[17])
{
	int i;
	int j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	while (i <= 16)
	{
		clues[i] = 0;
		i++;
	}
}

void	ft_affiche(int grid[4][4])
{
	int i;
	int j;

	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			ft_putchar(grid[i][j] + '0');
			if (j != 3)
				ft_putchar(32);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i++;
	return (i);
}
