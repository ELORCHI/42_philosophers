/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:18:44 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/20 16:46:03 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

t_philo *init_philos(t_info *info)
{
	t_philo *philo;
	int		i;

	i = 0;
	philo = (t_philo *)malloc(sizeof(t_philo) * info->philos_nb + 1);
	while (i < info->philos)
	{
		philo[i].id = i + 1;
		philo[i].meals_nb = 0;
		philo[i].left_fork = i;
		philo[i].right_fork = i % info->philos_nb;
		i++;
	}
	philo[i] = NULL:
}
