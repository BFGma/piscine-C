# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 14:55:35 by tharghaz          #+#    #+#              #
#    Updated: 2019/02/11 16:06:33 by tharghaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = srcs/ft_putchar.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strcmp.c \
		  srcs/ft_strlen.c \
		  srcs/ft_swap.c

OUTS = ft_putchar.o \
	   ft_putstr.o \
	   ft_strcmp.o \
	   ft_strlen.o \
	   ft_swap.o

INCL = icludes/

all: $(NAME)


$(NAME):
	gcc -c $(SOURCES) -I $(INCL) -Wall -Werror -Wextra
	ar rc $(NAME) $(OUTS)
	ranlib $(NAME)

clean:
	rm -f $(OUTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

