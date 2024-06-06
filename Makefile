# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:42:03 by paprzyby          #+#    #+#              #
#    Updated: 2024/06/06 14:03:24 by paprzyby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SOURCE		=	push_swap.c

OBJECTS		=	$(SOURCE:.c=.o)

CC			=	cc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

all:			$(SOURCE)

$(NAME):		$(OBJS)

%.o:			%.c push_swap.h
				$(CC) $(FLAGS) -c $< -o $@

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(OBJECTS)

re:				fclean all

.PHONY:			all clean fclean re
