/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biblio.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sothomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:09:19 by sothomas          #+#    #+#             */
/*   Updated: 2019/09/08 20:54:59 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBLIO_H
# define BIBLIO_H

void	ft_putchar(char c);
void	ft_init(int tab[4][4], int donnees[17]);
void	ft_affiche(int tab[4][4]);
int		ft_strlen(char *str);
int		ft_column_up(int tab[4][4], int donnees[17]);
int		ft_column_down(int tab[4][4], int donnees[17]);
int		ft_column_left(int tab[4][4], int donnees[17], int x);
int		ft_column_right(int tab[4][4], int donnees[17], int x);
int		test_line(int tab[4][4], int x, int y);
int		test_column(int tab[4][4], int x, int y);

#endif
