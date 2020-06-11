/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_ft_itoa_base1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 04:46:30 by yotillar          #+#    #+#             */
/*   Updated: 2020/04/23 23:56:41 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

uintmax_t		conv_ex(uintmax_t nb)
{
	if (nb >= 10)
		return (nb - 10 + 'a');
	else
		return (nb + '0');
}

/*void			ft_neg(char **str, int i, uintmax_t value, uintmax_t base)
{
	uintmax_t tmp;

	while (i > 0)
	{
		tmp = value % base;
		*str[i] = conv_ex(tmp);
		value /= base;
		i--;
	}
	*str[0] = '-';
}*/

char			*ft_itoa_base(uintmax_t value, uintmax_t base, int neg)
{
	int			i;
	char			*str;
	uintmax_t		tmp;

	i = 0;
	tmp = value;
	if (neg > 0)
		i += 1;
	while (tmp >= base)
	{
		tmp = tmp / base;
		i++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i + 1] = '\0';
	while (i >= 0 && neg == 0)
	{
		tmp = value % base;
		str[i] = conv_ex(tmp);
		value /= base;
		i--;
	}
	while (i > 0 && neg == 1)
	{
		tmp = value % base;
		str[i] = conv_ex(tmp);
		value /= base;
		i--;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
