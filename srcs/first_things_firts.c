/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_things_firts.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:00:04 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/25 18:24:42 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void *first_things_first(void *data)
{
	t_philo *philo;

	philo =  (t_philo *)data;
	philo->last_meal_time = get_time();
	while (1)
	{
		eat(philo);
		display(philo, "sleeping");
		timer(philo->info->sleep_time * 1000);
		display(philo, "is thinking");
	}
}
