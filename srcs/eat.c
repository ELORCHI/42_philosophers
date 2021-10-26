/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:02:43 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 16:12:21 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	eat(t_philo *philo)
{
	pthread_mutex_lock(philo->sm->mutexs + philo->left_fork);
	display(philo, "has taken a fork");
	pthread_mutex_lock(philo->sm->mutexs + philo->right_fork);
	display(philo, "has taken a fork");
	pthread_mutex_lock(&(philo->sm->is_eating));
	display(philo, "is eating");
	timer(philo->info->eat_time * 1000);
	pthread_mutex_unlock((&philo->sm->is_eating));
	philo->last_meal_time = get_time();
	philo->meals_nb += 1;
	pthread_mutex_unlock(philo->sm->mutexs + philo->left_fork);
	pthread_mutex_unlock(philo->sm->mutexs + philo->right_fork);
}
