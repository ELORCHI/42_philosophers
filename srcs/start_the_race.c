/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_the_race.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:10:55 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/22 16:26:49 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int start_the_race(t_info *info, t_philo *philos)
{
	int i;

	i = 0;
	while (philos[i] != NULL)
	{
		pthread_create(philo[i].thread, NULL, firt_things_first);
		i++;
	}
}
