/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 03:39:25 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/19 03:42:34 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*tab_2;

	if (!(tab_2 = (int *)malloc(sizeof(tab_2) * length)))
	i = 0;
	while (i < length)
	{
		tab_2[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_2);
}
