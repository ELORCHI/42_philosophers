/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angel_of_death.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:18:50 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/27 11:20:46 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

void	angel_of_death(t_philo *philo, t_info *info)
{
	int k;
	int i;

	k = 1;
	while (k)
	{
		i = 0;
		while (i < info->philos_nb)
		{
			if (get_time() - philo[i].last_meal_time > info->die_time)
			{
				pthread_mutex_lock(&(philo->sm->is_eating));
				display(&(philo[i]), "died");
				return ;
			}
			i++;
		}
		if (check_nb_meals(philo) == 0)
			return ;
	}
}
