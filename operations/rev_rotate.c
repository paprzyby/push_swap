/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:15:18 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/25 15:28:32 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

t_list	*ft_lstsecond_last(t_list *stack)
{
	if (!stack || !stack->next)
		return (NULL);
	while (stack->next->next)
		stack = stack->next;
	return (stack);
}

void	reverse_rotate(t_list **stack)
{
	t_list	*last_node;
	t_list	*second_last_node;
	int		len;

	if (!stack || !*stack)
		return ;
	len = ft_lstsize(*stack);
	if (len == 1)
		return ;
	last_node = ft_lstlast(*stack);
	second_last_node = ft_lstsecond_last(*stack);
	if (second_last_node)
		second_last_node->next = NULL;
	if (*stack)
		(*stack)->prev = last_node;
	last_node->next = *stack;
	last_node->prev = NULL;
	*stack = last_node;
}

void	rra(t_list **a, bool check)
{
	reverse_rotate(a);
	if (!check)
		write(1, "rra\n", 4);
}

void	rrb(t_list **b, bool check)
{
	reverse_rotate(b);
	if (!check)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b, bool check)
{
	rra(a, true);
	rrb(b, true);
	if (!check)
		write(1, "rrr\n", 4);
}
