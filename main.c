/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:39:56 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/12 16:17:46 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/srcs.h"

int main(int argc, char **argv)
{
	t_inpho		*info;

	inpho = NULL;
	check_args(argc, argv);
	get_inpho(argc, argv, info);
}
