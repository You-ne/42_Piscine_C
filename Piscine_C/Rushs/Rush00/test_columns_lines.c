/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_columns_lines.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:13:06 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/08 21:05:48 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_column_up(int tab[4][4], int donnees[17])
{
	int max;
	int count;
	int position;
	int y;

	y = 0;
	while (y <= 3)
	{
		count = 0;
		position = 0;
		max = 0;
		while (position <= 3)
		{
			if (tab[position][y] > max)
			{
				max = tab[position][y];
				count++;
			}
			position++;
		}
		if (count != donnees[y + 1])
			return (0);
		y++;
	}
	return (1);
}

int		ft_column_down(int tab[4][4], int donnees[17])
{
	int max;
	int count;
	int position;
	int y;

	y = 0;
	while (y <= 3)
	{
		count = 0;
		position = 3;
		max = 0;
		while (position >= 0)
		{
			if (tab[position][y] > max)
			{
				max = tab[position][y];
				count++;
			}
			position--;
		}
		if (count != donnees[y + 5])
			return (0);
		y++;
	}
	return (1);
}

int		ft_column_left(int tab[4][4], int donnees[17], int x)
{
	int max;
	int count;
	int position;

	count = 0;
	position = 0;
	max = 0;
	while (position <= 3)
	{
		if (tab[x][position] > max)
		{
			max = tab[x][position];
			count++;
		}
		position++;
	}
	if (count == donnees[x + 9])
		return (1);
	else
		return (0);
}

int		ft_column_right(int tab[4][4], int donnees[17], int x)
{
	int max;
	int count;
	int position;

	count = 0;
	position = 3;
	max = 0;
	while (position >= 0)
	{
		if (tab[x][position] > max)
		{
			max = tab[x][position];
			count++;
		}
		position--;
	}
	if (count == donnees[x + 13])
		return (1);
	else
		return (0);
}
