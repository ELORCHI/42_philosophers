/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_the_race.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:10:55 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 16:12:11 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	start_the_race(t_info *info, t_philo *philo)
{
	int	i;

	i = 0;
	philo[0].sm->start = get_time();
	while (i < info->philos_nb)
	{
		pthread_create(philo[i].thread, NULL,
			first_things_first, (void *)(&(philo[i])));
		usleep(1000);
		i++;
	}
	return (0);
}
