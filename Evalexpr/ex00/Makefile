# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharghaz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 17:51:18 by tharghaz          #+#    #+#              #
#    Updated: 2019/02/17 12:43:41 by tharghaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESULT=eval_expr
SRCS=srcs/*.c

all:
	@gcc -o $(RESULT) $(SRCS) -Wall -Wextra -Werror

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(RESULT)

re: clean all
