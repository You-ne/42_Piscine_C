/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 02:41:32 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/19 03:01:44 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
