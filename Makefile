# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:42:03 by paprzyby          #+#    #+#              #
#    Updated: 2024/06/04 16:57:53 by paprzyby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=

SOURCE		=	push_swap.c

OBJECTS		=	$(SOURCE:.c=.o)

CC			=	cc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

all:			$(SOURCE)

$(NAME):		all

%.o:			%.c push_swap.h
				$(CC) $(FLAGS) -c $< -o $@

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(OBJECTS)

re:				fclean all

.PHONY:			all clean fclean re
