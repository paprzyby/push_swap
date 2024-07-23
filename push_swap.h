/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:45:07 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/22 13:22:36 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include "./utils/utils.h"
# include "./operations/operations.h"

void	push_swap(t_list **a, t_list **b);
void	three_nodes(t_list **a);
bool	check_if_sorted(t_list *a);
void	which_sort(t_list **a, t_list **b);
void	four_nodes(t_list **a, t_list **b);
void	set_target_node(t_list *a, t_list *b);
void	set_node_position(t_list *stack);
void	set_the_price(t_list *a, t_list *b);
void	set_the_cheapest(t_list *b);
void	rotate_both(t_list **a, t_list **b, t_list *cheapest_node);
void	reverse_rotate_both(t_list **a, t_list **b, t_list *cheapest_node);
t_list	*find_the_smallest(t_list *stack);
long	ft_atol(char *str);
int		check_for_repeat(t_list *stack, int num);
void	create_node(t_list **stack, int num);
t_list	*find_last_node(t_list *stack);
int		check_for_int(char *str);
void	move_the_nodes(t_list **a, t_list **b);
void	move_the_nodes(t_list **a, t_list **b);
void	stack_init(t_list **stack, char **argv, bool check);
void	error_handle(t_list **stack, char **argv, bool check);

#endif
