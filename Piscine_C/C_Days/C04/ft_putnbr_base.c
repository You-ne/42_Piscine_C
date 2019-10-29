/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:26:50 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/10 12:07:56 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int n;
	unsigned int base_len;

	base_len = ft_strlen(base);
	if (base_len > 1 && check_base(base) == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = nbr * -1;
		}
		else
			n = nbr;
		if (n >= base_len)
			ft_putnbr_base((n / base_len), base);
		ft_putchar(base[n % base_len]);
	}
}
