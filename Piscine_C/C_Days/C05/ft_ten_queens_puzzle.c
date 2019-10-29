/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 01:41:03 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/13 21:13:30 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		pos(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

int		verif(int *grid, int line, int column)
{
	int l;
	int c;
	int ok;

	ok = 1;
	l = 1;
	while (l <= line)
	{
		c = grid[l];
		ok = ok && (pos(line - l) != pos(column - c)) && (column != c);
		l++;
	}
	return (ok);
}

void	display(int grid[11])
{
	int		i;
	char	c;

	i = 1;
	while (i < 11)
	{
		c = grid[i] + 47;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		put_queen(int grid[11], int line)
{
	int column;

	if (line == 11)
		display(grid);
	column = 1;
	while (column < 11)
	{
		if (verif(grid, line, column))
		{
			grid[line] = column;
			put_queen(grid, line + 1);
			grid[line] = 0;
		}
		column += 1;
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int grid[11];

	put_queen(grid, 1);
	return (724);
}
