/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:53:57 by eel-orch          #+#    #+#             */
/*   Updated: 2021/10/12 12:18:55 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		ft_strcmp(const char *first, const char *second);
int		check_args(int nb_args, char **args);
int		is_positive_int(char *str);
int		ft_atoi(const char *str);
int		ft_isint(char *str);
int		ft_isdigit(int c);


void	print_error(char *error_msg);
char	*ft_itoa(int n);

#endif
