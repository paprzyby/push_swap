/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:38:56 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/25 15:27:29 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_the_smallest(t_list *stack)
{
	t_list	*smallest_node;
	long	smallest;

	if (!stack)
		return (NULL);
	smallest_node = NULL;
	smallest = LONG_MAX;
	while (stack)
	{
		if (stack->value < smallest)
		{
			smallest = stack->value;
			smallest_node = stack;
		}
		stack = stack->next;
	}
	return (smallest_node);
}

void	set_target_node(t_list *a, t_list *b)
{
	t_list	*curr_a;
	t_list	*target_node;
	long	best_index;

	while (b)
	{
		curr_a = a;
		best_index = LONG_MAX;
		while (curr_a)
		{
			if (curr_a->value > b->value
				&& curr_a->value < best_index)
			{
				best_index = curr_a->value;
				target_node = curr_a;
			}
			curr_a = curr_a->next;
		}
		if (best_index == LONG_MAX)
			b->target_node = find_the_smallest(a);
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
		b->push_price = b->current_position;
		if (b->top_bot == false)
			b->push_price = len_b - (b->current_position);
		if (b->target_node->top_bot == true)
			b->push_price += b->target_node->current_position;
		else
			b->push_price += len_a - (b->target_node->current_position);
		b = b->next;
	}
}

void	set_the_cheapest(t_list *b)
{
	t_list	*best_node;
	t_list	*current;
	int		best_price;

	if (!b)
		return ;
	best_node = b;
	best_price = b->push_price;
	current = b;
	while (current)
	{
		if (current->push_price < best_price)
		{
			best_price = current->push_price;
			best_node = current;
		}
		current = current->next;
	}
	current = b;
	while (current)
	{
		current->cheapest = false;
		current = current->next;
	}
	best_node->cheapest = true;
}
