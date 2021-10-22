/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:53:57 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/22 16:20:19 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>
#include <pthread.h> 

typedef struct t_info
{
	int philos_nb;
	int	die_time;
	int eat_time;
	int sleep_time;
	int	must_eat_nb;
}				t_info;

typedef struct s_philo
{
	int				id;
	int				meals_nb;
	int				left_fork;
	int 			right_fork;
	pthread_mutex_t *mutex;
	pthread_t		*thread;
	int				last_meal_time;
}			t_philo;

int		ft_strcmp(const char *first, const char *second);
int		check_args(int nb_args, char **args);
int		is_positive_int(char *str);
int		ft_atoi(const char *str);
int		ft_isint(char *str);
int		ft_isdigit(int c);


void	print_error(char *error_msg);
char	*ft_itoa(int n);

#endif
