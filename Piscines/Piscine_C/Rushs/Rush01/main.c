/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:10:29 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/08 21:32:04 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "lib.h"

void	check_end(int grid[4][4], int clues[17])
{
	if (up_clue(grid, clues) == 1 &&
			down_clue(grid, clues) == 1 && clues[0] == 0)
	{
		ft_affiche(grid);
		clues[0] = 1;
	}
}

void	ft_put_tower(int grid[4][4], int clues[17], int x, int y)
{
	int i;

	if (x == 4)
	{
		check_end(grid, clues);
		return ;
	}
	i = 1;
	while (i <= 4)
	{
		grid[x][y] = i;
		if (test_line(grid, x, y) == 1 && test_column(grid, x, y) == 1)
		{
			if (y == 3)
			{
				if ((left_clue(grid, clues, x) == 1)
						&& right_clue(grid, clues, x) == 1)
					ft_put_tower(grid, clues, x + 1, 0);
			}
			else
				ft_put_tower(grid, clues, x, y + 1);
		}
		i++;
	}
}

int		raccourci(int grid[4][4], int clues[17], char **argv)
{
	int i;
	int j;

	j = 1;
	i = 0;
	ft_init(grid, clues);
	while (argv[1][i])
	{
		if (!((argv[1][i] >= '1' && argv[1][i] <= '4') || argv[1][i] == 32)
				|| (argv[1][i] == 32 && argv[1][i + 1] == 32)
				|| ((argv[1][i] >= '1' && argv[1][i] <= '4')
					&& (argv[1][i + 1] >= '1' && argv[1][i + 1] <= '4')))
		{
			return (0);
		}
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			clues[j] = argv[1][i] - '0';
			j++;
		}
		i++;
	}
	return (j);
}

int		main(int argc, char **argv)
{
	int clues[17];
	int grid[4][4];

	if (argc != 2 || ft_strlen(argv[1]) != 32
			|| raccourci(grid, clues, argv) != 17)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
	ft_put_tower(grid, clues, 0, 0);
	if (clues[0] == 0)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
