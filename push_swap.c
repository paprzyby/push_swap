/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/20 20:41:14 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*return_the_cheapest(t_list *b)
{
	if (!b)
		return (NULL);
	while (b)
	{
		if (b->cheapest)
			return (b);
		b = b->next;
	}
	return (NULL);
}

void	finish_rotation(t_list **stack, t_list *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->top_bot)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (stack_name == 'b')
		{
			if (top_node->top_bot)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}

void	rotate_both(t_list **a, t_list **b, t_list *cheapest_node)
{
	while (*a != cheapest_node->target_node && *b != cheapest_node)
			rr(a, b, false);
	set_node_position(*a);
	set_node_position(*b);
}

void	reverse_rotate_both(t_list **a, t_list **b, t_list *cheapest_node)
{
	while (*a != cheapest_node->target_node && *b != cheapest_node)
			rrr(a, b, false);
	set_node_position(*a);
	set_node_position(*b);
}

void	push_swap_init(t_list *a, t_list *b)
{
	set_node_position(a);
	set_node_position(b);
	set_target_node(a, b);
	set_the_price(a, b);
	set_the_cheapest(b);
}

void	move_the_nodes(t_list **a, t_list **b)
{
	t_list	*cheapest_node;

	cheapest_node = return_the_cheapest(*b);
	if (cheapest_node == NULL)
		return;
	if (cheapest_node->top_bot && cheapest_node->target_node->top_bot)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->top_bot) && !(cheapest_node->target_node->top_bot))
		reverse_rotate_both(a, b, cheapest_node);
	finish_rotation(b, cheapest_node, 'b');
	finish_rotation(a, cheapest_node->target_node, 'a');
	pa(a, b);
}

void	push_swap(t_list **a, t_list **b)
{
	t_list	*smallest;

	while ((*a)->next->next->next != NULL)
		pb(a, b);
	three_nodes(a);
	while (*b)
	{
		push_swap_init(*a, *b);
		move_the_nodes(a, b);
	}
	set_node_position(*a);
	smallest = find_the_smallest(*a);
	if (smallest->top_bot)
		while (*a != smallest)
			ra(a, false);
	else
		while (*a != smallest)
			rra(a, false);
}
