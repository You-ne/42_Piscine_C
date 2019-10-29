/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:31:00 by yotillar          #+#    #+#             */
/*   Updated: 2019/08/30 23:21:55 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
		ft_putchar(c);
	}
	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
}
