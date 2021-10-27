NAME = philo

SRCS = main.c srcs/angel_of_death.c srcs/display.c srcs/ft_atoi.c srcs/ft_itoa.c srcs/get_info.c srcs/is_positive_int.c srcs/start_the_race.c \
		srcs/check_args.c srcs/eat.c srcs/ft_isdigit.c srcs/ft_sleep.c srcs/get_time.c srcs/print_error.c srcs/check_nb_meals.c \
		srcs/first_things_firts.c srcs/ft_isint.c srcs/ft_strcmp.c srcs/init_philos.c

all : $(NAME)

$(NAME): 
		gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME)

clean:
		
fclean:
		rm -rf $(NAME)
re: fclean all
