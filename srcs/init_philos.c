/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:18:44 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 16:10:43 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

t_philo	*init_philos(t_info *info)
{
	t_philo	*philo;
	t_sm	*sm;
	int		i;

	i = 0;
	philo = (t_philo *)malloc(sizeof(t_philo) * info->philos_nb);
	sm = (t_sm *)malloc(sizeof(t_sm));
	sm->mutexs = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t)
			* info->philos_nb);
	pthread_mutex_init(&(sm->p), NULL);
	pthread_mutex_init(&(sm->is_eating), NULL);
	while (i < info->philos_nb)
	{
		philo[i].id = i + 1;
		philo[i].meals_nb = 0;
		philo[i].left_fork = i;
		philo[i].right_fork = (i + 1) % info->philos_nb;
		philo[i].thread = (pthread_t *)malloc(sizeof(pthread_t));
		philo[i].info = info;
		pthread_mutex_init(sm->mutexs + i, NULL);
		philo[i].sm = sm;
		i++;
	}
	return (philo);
}
