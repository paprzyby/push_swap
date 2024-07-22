/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:28:53 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/22 08:10:15 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(UTILS_H)
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_list
{
	int				value;
	int				current_position;
	int				push_price;
	bool			top_bot;
	bool			cheapest;
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*target_node;
}					t_list;

long	ft_atol(char *str);
int		check_for_repeat(t_list *stack, int num);
void	create_node(t_list **stack, int num);
t_list	*find_last_node(t_list *stack);
int		error_handle(t_list **stack);
char	**ft_split(char const *s, char c);
void	ft_lstclear(t_list **stack);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
int		check_for_int(char *str);
void	move_the_nodes(t_list **a, t_list **b);
void	move_the_nodes(t_list **a, t_list **b);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif