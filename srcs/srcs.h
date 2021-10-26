/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:53:57 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/26 16:00:38 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <sys/time.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h> 

typedef struct t_info
{
	int	philos_nb;
	int	die_time;
	int	eat_time;
	int	sleep_time;
	int	must_eat_nb;
}				t_info;


int			ft_strcmp(const char *first, const char *second);
int			check_args(int nb_args, char **args);
int			is_positive_int(char *str);
int			ft_atoi(const char *str);
int			ft_isint(char *str);
int			ft_isdigit(int c);
void		print_error(char *error_msg);
char		*ft_itoa(int n);
t_info		*get_info(int argc, char **args);
#endif
