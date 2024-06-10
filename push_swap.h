/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:42:06 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/10 13:20:20 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_list
{
	int				num;
	struct s_list	*next;
	struct s_list	*current;
	struct s_list	*prev;
}					t_list;

void	stack_init(t_list **a, char **argv);
long	ft_atol(char *str);
void	error_free(t_list a, int num);
int		check_for_repeat(t_list **a, int num);

#endif
