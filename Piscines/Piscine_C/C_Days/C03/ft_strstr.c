/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotillar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 06:22:41 by yotillar          #+#    #+#             */
/*   Updated: 2019/09/10 20:57:42 by yotillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;

	i = 0;
	if (!to_find || to_find[0] == '\0')
		return (str);
	while (*str && to_find[i])
	{
		i = 0;
		while (str[i] == to_find[i] && (str[i] && to_find[i]))
		{
			if (to_find[i + 1] == '\0')
				return (str);
			i++;
		}
		str++;
	}
	return (0);
}
