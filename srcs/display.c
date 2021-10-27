/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:39:51 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/27 12:16:57 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	display(t_philo *philo, char *msg)
{
	uint64_t	time;

	time = get_time() - philo->sm->start;
	pthread_mutex_lock(&(philo->sm->p));
	printf("%llu philo %d %s %d\n", time, philo->id, msg, philo->meals_nb);
	if (strcmp(msg, "died") == 0)
		return ;
	pthread_mutex_unlock(&(philo->sm->p));
}
