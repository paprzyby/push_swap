# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:42:03 by paprzyby          #+#    #+#              #
#    Updated: 2024/06/17 13:57:02 by paprzyby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SOURCE		=	push_swap.c \
				utils/stack_init.c utils/error_handle.c \
				utils/ft_lstlast.c utils/ft_split.c \
				operations/push.c operations/rotate.c \
				operations/swap.c operations/rev_rotate.c \
				operations/small_sort.c

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
