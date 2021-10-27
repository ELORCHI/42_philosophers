/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_inpho.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:08:14 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/27 12:20:21 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

t_info	*get_info(int argc, char **args)
{
	t_info	*info;

	info = (t_info *)malloc(sizeof(t_info));
	info->philos_nb = ft_atoi(args[1]);
	info->die_time = ft_atoi(args[2]);
	info->eat_time = ft_atoi(args[3]);
	info->sleep_time = ft_atoi(args[4]);
	if (argc == 6)
		info->must_eat_nb = ft_atoi(args[5]);
	else
		info->must_eat_nb = -1;
	return (info);
}
