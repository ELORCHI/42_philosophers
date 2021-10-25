/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:19:13 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/25 17:59:46 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	timer(int t)
{
	uint64_t	start;
	uint64_t	time_diff;

	start = get_time() * 1000;
	while (1)
	{
		time_diff = t - (get_time() * 1000 - start);
		if (time_diff < 50)
		{
			usleep(time_diff);
			break ;
		}
		if (time_diff > (uint64_t)t)
			break ;
		usleep(50);
	}
}
