# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:42:03 by paprzyby          #+#    #+#              #
#    Updated: 2024/07/08 10:17:43 by paprzyby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

SOURCE		=	push_swap.c main.c stack_init.c sort.c \
				utils/error_handle.c utils/ft_lstlast.c \
				utils/ft_split.c utils/ft_lstsize.c utils/ft_lstclear.c \
				operations/push.c operations/rotate.c \
				operations/swap.c operations/rev_rotate.c \
				nodes_init.c

OBJECTS		=	$(SOURCE:.c=.o)

CC			=	cc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

all:			$(NAME)
	@echo ""
	@echo "$(NAME) built successfully!"
	@echo ""

$(NAME):		$(OBJECTS)

%.o:			%.c push_swap.h
				$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)
	@echo ""
	@echo "All files cleaned successfully!"
	@echo ""
re:				fclean all

.PHONY:			all clean fclean re
