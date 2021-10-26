/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:56:19 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 16:01:58 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	check_args(int nb_args, char **args)
{
	int	i;

	if (nb_args != 5 && nb_args != 6)
	{
		print_error("ERROR: ARGUMENTS\n");
		return (1);
	}
	i = 1;
	while (args[i])
	{
		if (is_positive_int(args[i]) == 1)
		{
			print_error("ERROR: ARGUMENTS\n");
			return (1);
		}
		i++;
	}
	return (0);
}
