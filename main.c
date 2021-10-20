/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:39:56 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/20 16:49:44 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/srcs.h"

int main(int argc, char **argv)
{
	t_inpho		*info;
	t_philo		*philos;

	inpho = NULL;
	philo = NULL;
	if (check_args(argc, argv) == 1)
		return (1);
	get_inpho(argc, argv, info);
	philos = init_philos(info);
}
