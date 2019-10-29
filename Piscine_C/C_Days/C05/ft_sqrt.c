/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:47:26 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/12 22:11:17 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_sqrt(int nb)
{
	int				x;
	unsigned int	round;

	round = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	x = nb / 2;
	while (round++ < 20)
	{
		if (x == 0)
			x = 1;
		x = (x + nb / x) * 0.5;
		if (x * x == nb)
			return (x);
	}
	return (0);
}
