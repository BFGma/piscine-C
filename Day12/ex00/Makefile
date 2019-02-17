# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 17:51:18 by tharghaz          #+#    #+#              #
#    Updated: 2019/02/14 16:57:31 by tharghaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESULT=ft_display_file
SRCS=display_file.c

all:
	@gcc -o $(RESULT) $(SRCS) -Wall -Wextra -Werror

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(RESULT)

re: clean all
