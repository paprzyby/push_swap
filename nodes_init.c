/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:38:56 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/03 10:53:55 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_node(t_list *a, t_list *b, t_list *smallest)
{
	t_list	*head;
	t_list	*target_node;
	long	best_index;

	head = a;
	best_index = LONG_MAX;
	while (b)
	{
		a = head;
		best_index = LONG_MAX;
		while (a)
		{
			if (a->value > b->value
				&& a->value < best_index)
			{
				best_index = a->value;
				target_node = a;
			}
			a = a->next;
		}
		if (best_index == LONG_MAX)
			b->target_node = smallest;
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	set_node_position(t_list *stack)
{
	int	center;
	int	i;

	if (!stack)
		return ;
	i = 0;
	center = ft_lstsize(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		if (i > center)
			stack->top_bot = false;
		else
			stack->top_bot = true;
		i++;
		stack = stack->next;
	}
}

void	set_the_price(t_list *a, t_list *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(a);
	len_b = ft_lstsize(b);
	while (b)
	{
		if (!(b->top_bot))
			b->push_price = len_b - b->current_position;
		if (b->target_node->top_bot)
			b->push_price += b->target_node->current_position;
		else
			b->push_price += len_a - (b->target_node->current_position);
		b = b->next;
	}
}

void	set_the_cheapest(t_list *b)
{
	long	best_price;
	t_list	*best_node;

	if (!b)
		return ;
	best_price = LONG_MAX;
	while (b)
	{
		if (b->push_price < best_price)
		{
			best_price = b->push_price;
			best_node = b;
		}
		b = b->next;
	}
	best_node->cheapest = true;
}
