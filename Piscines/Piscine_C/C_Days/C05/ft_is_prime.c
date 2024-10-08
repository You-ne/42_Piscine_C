/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:19:10 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/17 20:45:13 by yotillar         ###   ########.fr       */
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

int		main()
{
	printf("%d", ft_is_prime(2147483629));
	return (0);
}
