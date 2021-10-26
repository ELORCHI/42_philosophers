/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nb_meals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 10:25:31 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 12:24:50 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int check_nb_meals(t_philo *philo)
{
	int i;
	char nb_philos;
	int	must_eat;

	must_eat = philo[0].info->must_eat_nb;
	nb_philos = philo[0].info->philos_nb;
	i = 0;
	while (i < nb_philos)
	{
		if (philo[i].meals_nb == must_eat)
			i++;
		else
			return (1);
	}
	return (0);
}
