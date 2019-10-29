/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:56:11 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/13 22:07:31 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int div;

	div = 3;
	if (nb == 2 || nb == 2147483647)
		return (1);
	if (nb % 2 == 0)
		return (0);
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (div < nb / 2)
	{
		if (nb % div == 0)
			return (0);
		div += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int res;

	res = nb;
	if (ft_is_prime(res) == 1)
		return (res);
	if (nb <= 2)
		return (2);
	if (res % 2 == 0)
		res += 1;
	while (res <= 2147483647)
	{
		while (ft_is_prime(res) != 1)
			res += 2;
		return (res);
	}
	return (0);
}
