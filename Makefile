# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:42:03 by paprzyby          #+#    #+#              #
#    Updated: 2024/06/12 14:39:18 by paprzyby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SOURCE		=	push_swap.c stack_init.c error_handle.c \
				ft_lstlast.c ft_split.c

OBJECTS		=	$(SOURCE:.c=.o)

CC			=	cc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJECTS)

%.o:			%.c push_swap.h
				$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
