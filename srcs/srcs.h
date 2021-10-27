/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:53:57 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/27 11:21:53 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

#include <sys/time.h>
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

typedef struct s_sm
{
	pthread_mutex_t *mutexs;
	pthread_mutex_t p;
	pthread_mutex_t	is_eating;
	uint64_t		start;
}				t_sm;

typedef struct s_philo
{
	int				id;
	int				meals_nb;
	int				left_fork;
	int 			right_fork;
	pthread_t		*thread;
	t_sm			*sm;	
	uint64_t		last_meal_time;
	t_info			*info;
}			t_philo;

int		ft_strcmp(const char *first, const char *second);
int		check_args(int nb_args, char **args);
int		is_positive_int(char *str);
int		ft_atoi(const char *str);
int		ft_isint(char *str);
int		ft_isdigit(int c);


void		print_error(char *error_msg);
char		*ft_itoa(int n);
t_info		*get_info(int argc, char **args);
t_philo		*init_philos(t_info *info);
void		*first_things_first(void *data);
int			start_the_race(t_info *info, t_philo *philo);
void		ft_sleep(int s);
void		eat(t_philo *philo);
void		display(t_philo *philo, char *msg);
uint64_t	get_time(void);
void		timer(int t);
int			check_nb_meals(t_philo *philo);
void		angel_of_death(t_philo *philo, t_info *info);
#endif
