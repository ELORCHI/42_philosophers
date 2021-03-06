/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:01:48 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/12 12:09:39 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	retur(unsigned long j, int sin)
{
	if (j > 2147483647 && sin == 1)
		return (-1);
	if (j > 2147483648 && sin == -1)
		return (0);
	return (j * sin);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sin;
	unsigned long	j;

	i = 0;
	j = 0;
	sin = 1;
	while ((str[i] != '\0' && (str[i] >= 9 && str[i] <= 13)) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sin = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + (str[i] - '0');
		i++;
	}
	return (retur(j, sin));
}
