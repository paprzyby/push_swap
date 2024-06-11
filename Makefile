# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:42:03 by paprzyby          #+#    #+#              #
#    Updated: 2024/06/11 14:20:02 by paprzyby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SOURCE		=	push_swap.c stack_init.c

OBJECTS		=	$(SOURCE:.c=.o)

CC			=	cc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)

%.o:			%.c push_swap.h
				$(CC) $(FLAGS) -c $< -o $@

clean:
				$(RM) $(NAME)

fclean:			clean
				$(RM) $(NAME) $(OBJECTS)

re:				fclean all

.PHONY:			all clean fclean re
