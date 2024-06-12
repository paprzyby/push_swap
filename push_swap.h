/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:42:06 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/12 09:40:41 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_lst
{
	int				num;
	int				value;
	struct s_lst	*current;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

void	stack_init(t_lst **a, char **argv);
long	ft_atol(char *str);
void	error_handle(t_lst **stack);
int		check_for_repeat(t_lst *stack, int num);
void	create_node(t_lst **stack, int num);
t_lst	*find_last_node(t_lst *stack);

char	**ft_split(char const *s, char c);

#endif
