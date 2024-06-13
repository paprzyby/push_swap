/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:42:06 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/13 13:38:58 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				num;
	int				value;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

//main
void	stack_init(t_list **a, char **argv);
long	ft_atol(char *str, t_list **stack);
int		check_for_repeat(t_list *stack, int num);
void	create_node(t_list **stack, int num);
t_list	*find_last_node(t_list *stack);
int		error_handle(t_list **stack);

//operations
void	push(t_list **a, t_list **b);
void	rotate(t_list **a);

//utils
char		**ft_split(char const *s, char c);
void		ft_lstclear(t_list **lst);
t_list		*ft_lstlast(t_list *lst);

#endif
