# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peroyce <peroyce@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 14:02:48 by peroyce           #+#    #+#              #
#    Updated: 2019/02/20 22:13:30 by tharghaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bsq

SRC=./srcs/ft_alg.c \
	./srcs/ft_atoi.c \
	./srcs/ft_map_check.c \
	./srcs/ft_one_to_two.c \
	./srcs/ft_print_result.c \
	./srcs/main.c \
	./srcs/read_map.c \
	./srcs/counters.c

HEAD=./includes/

CC=gcc -Wall -Wextra -Werror -o

all:
	@$(CC) $(NAME) $(SRC) -I $(HEAD)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
