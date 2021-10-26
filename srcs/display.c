/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:39:51 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 10:38:25 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void display(t_philo *philo, char *msg)
{
	uint64_t time;

	time = get_time() - philo->sm->start;
	pthread_mutex_lock(&(philo->sm->p));
	printf("%llu philo %d %s\n", time, philo->id, msg);
	if (strcmp(msg, "died") == 0)
		return ;
	pthread_mutex_unlock(&(philo->sm->p));
}
