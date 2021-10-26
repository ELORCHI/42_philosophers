/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:39:56 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 11:16:46 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/srcs.h"
#include <string.h>
#include <sys/errno.h>
int main(int argc, char **argv)
{
	int			i;
	t_info		*info;
	t_philo		*philo;
	int			k;

	info = NULL;
	philo = NULL;
	if (check_args(argc, argv) == 1)
	{
		write(2, "ok\n", 3);
	}
	info = get_info(argc, argv);
	philo = init_philos(info);
	start_the_race(info, philo);
	k = 1;
	while (k)
	{
		i = 0;
		while (i < info->philos_nb)
		{
			if (get_time() - philo[i].last_meal_time > info->die_time)
			{
				display(&(philo[i]), "died");
				k = 0;
				break;
			}
		}
		if (check_nb_meals(philo) == 0)
			break;
	}
	//free
	return (0);
}
