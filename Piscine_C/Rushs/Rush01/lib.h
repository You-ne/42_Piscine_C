/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biblio.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:09:19 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/08 21:30:49 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBLIO_H
# define BIBLIO_H

void	ft_putchar(char c);
void	ft_init(int grid[4][4], int clues[17]);
void	ft_affiche(int grid[4][4]);
int		ft_strlen(char *str);
int		up_clue(int grid[4][4], int clues[17]);
int		down_clue(int grid[4][4], int clues[17]);
int		left_clue(int grid[4][4], int clues[17], int x);
int		right_clue(int grid[4][4], int clues[17], int x);
int		test_line(int grid[4][4], int x, int y);
int		test_column(int grid[4][4], int x, int y);

#endif
