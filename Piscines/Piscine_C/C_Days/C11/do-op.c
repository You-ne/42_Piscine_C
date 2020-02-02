/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:29:55 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/19 22:39:40 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		calc(int v1, char op, int v2)
{
	int res;

	res = 0;
	if (op == '+')
		res = v1 + v2;
	if (op == '-')
		res = v1 - v2;
	if (op == '*')
		res = v1 * v2;
	if (op == '/')
		res = v1 / v2;
	if (op == '%')
		res = v1 % v2;
	return (res);
}

int		valid_div(char str, int v2)
{
	if (str == '/')
		if (v2 == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
	if (str == '%')
		if (v2 == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
	return (1);
}

int		valid_op(char *str)
{
	if (*str && (*str == '+' || *str == '-' || *str == '*' || *str == '/'
		|| *str == '%'))
			return (1);
	return (0);
}

int		main(int ac, char **av)
{
	int v1;
	int v2;

	if (ac != 4)
		return (0);
	if (!(valid_op(av[2])))
	{
		ft_putstr("0\n");
		return (0);
	}
	v1 = ft_atoi(av[1]);
	printf("v1 = %d\n", v1);
	v2 = ft_atoi(av[3]);
	printf("v2 = %d\n", v2);
	if (!(valid_div(av[2][0], v2)))
		return (0);
	ft_putnbr(calc(v1, av[2][0], v2));
	ft_putchar('\n');
	return (0);
}
