/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_columns_lines.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:13:06 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/08 21:32:29 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		up_clue(int grid[4][4], int clues[17])
{
	int max;
	int view;
	int position;
	int y;

	y = 0;
	while (y <= 3)
	{
		view = 0;
		position = 0;
		max = 0;
		while (position <= 3)
		{
			if (grid[position][y] > max)
			{
				max = grid[position][y];
				view++;
			}
			position++;
		}
		if (view != clues[y + 1])
			return (0);
		y++;
	}
	return (1);
}

int		down_clue(int grid[4][4], int clues[17])
{
	int max;
	int view;
	int position;
	int y;

	y = 0;
	while (y <= 3)
	{
		view = 0;
		position = 3;
		max = 0;
		while (position >= 0)
		{
			if (grid[position][y] > max)
			{
				max = grid[position][y];
				view++;
			}
			position--;
		}
		if (view != clues[y + 5])
			return (0);
		y++;
	}
	return (1);
}

int		left_clue(int grid[4][4], int clues[17], int x)
{
	int max;
	int view;
	int position;

	view = 0;
	position = 0;
	max = 0;
	while (position <= 3)
	{
		if (grid[x][position] > max)
		{
			max = grid[x][position];
			view++;
		}
		position++;
	}
	if (view == clues[x + 9])
		return (1);
	else
		return (0);
}

int		right_clue(int grid[4][4], int clues[17], int x)
{
	int max;
	int view;
	int position;

	view = 0;
	position = 3;
	max = 0;
	while (position >= 0)
	{
		if (grid[x][position] > max)
		{
			max = grid[x][position];
			view++;
		}
		position--;
	}
	if (view == clues[x + 13])
		return (1);
	else
		return (0);
}
