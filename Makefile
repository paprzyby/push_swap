# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 16:42:03 by paprzyby          #+#    #+#              #
#    Updated: 2024/07/22 09:57:14 by paprzyby         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

COLOUR_GREEN	=	\033[0;32m
COLOUR_END		=	\033[0m


NAME		=	push_swap

SOURCE		=	push_swap.c main.c stack_init.c \
				error_handle.c utils/ft_lstlast.c \
				utils/ft_split.c utils/ft_lstsize.c utils/ft_lstclear.c \
				operations/push.c operations/rotate.c \
				operations/swap.c operations/rev_rotate.c \
				nodes_init.c utils/ft_lstadd_back.c

OBJECTS		=	$(SOURCE:.c=.o)

CC			=	cc

RM			=	rm -f

FLAGS		=	-Wall -Wextra -Werror

$(NAME):	$(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)
	@echo ""
	@echo "$(COLOUR_GREEN)$(NAME) built successfully!$(COLOUR_END)"
	@echo ""

%.o:			%.c push_swap.h
				$(CC) $(FLAGS) -c $< -o $@

all:			$(NAME)

clean:
	$(RM) -rf $(OBJECTS)
	@echo ""
	@echo "$(COLOUR_GREEN)objects removed successfully..$(COLOUR_END)"
	@echo ""

fclean:	clean
	$(RM) $(NAME) $(OBJECTS)
	@echo ""
	@echo "$(COLOUR_GREEN)$(NAME) cleaned successfully..$(COLOUR_END)"
	@echo ""

re:				fclean all

.PHONY:			all clean fclean re
