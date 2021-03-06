/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:39:56 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 14:23:11 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/srcs.h"
#include <string.h>
#include <sys/errno.h>
int main(int argc, char **argv)
{
	t_info		*info;
	t_philo		*philo;

	info = NULL;
	philo = NULL;
	if (check_args(argc, argv) == 1)
	{
		return (0);
	}
	info = get_info(argc, argv);
	philo = init_philos(info);
	start_the_race(info, philo);
	angel_of_death(philo, info);
	return (0);
}
