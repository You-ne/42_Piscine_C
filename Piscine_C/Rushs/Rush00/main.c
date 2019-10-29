/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:10:29 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/08 21:05:43 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "biblio.h"

void	ft_put_tower2(int tab[4][4], int donnees[17])
{
	if (ft_column_up(tab, donnees) == 1 &&
			ft_column_down(tab, donnees) == 1 && donnees[0] == 0)
	{
		ft_affiche(tab);
		donnees[0] = 1;
	}
}

void	ft_put_tower(int tab[4][4], int donnees[17], int x, int y)
{
	int i;

	if (x == 4)
	{
		ft_put_tower2(tab, donnees);
		return ;
	}
	i = 1;
	while (i <= 4)
	{
		tab[x][y] = i;
		if (test_line(tab, x, y) == 1 && test_column(tab, x, y) == 1)
		{
			if (y == 3)
			{
				if ((ft_column_left(tab, donnees, x) == 1)
						&& ft_column_right(tab, donnees, x) == 1)
					ft_put_tower(tab, donnees, x + 1, 0);
			}
			else
				ft_put_tower(tab, donnees, x, y + 1);
		}
		i++;
	}
}


/* fonction raccourci qui transfere les parametres de char *argv[1]  dans int donnees[] */

int		raccourci(int tab[4][4], int donnees[17], char **argv)
{
	int i;
	int j;

	j = 1;
	i = 0;

/* appelle init pour nettoyer les tableaux avant utilisation */ 
	ft_init(tab, donnees);
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
			donnees[j] = argv[1][i] - '0';
			j++;
		}
		i++;
	}
	return (j);
}

int		main(int argc, char **argv)
{
	int donnees[17];
	int tab[4][4];

/* verifie que les 16 arguments sont biens transferes dans int donnees[] */
	if (argc != 2 || ft_strlen(argv[1]) != 32
			|| raccourci(tab, donnees, argv) != 17)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}

	ft_put_tower(tab, donnees, 0, 0);

	if (donnees[0] == 0)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}
