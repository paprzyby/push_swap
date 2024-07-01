/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/01 15:05:00 by paprzyby         ###   ########.fr       */
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

//void	set_price(t_list *a, t_list *b)
//{

//}

void	push_swap(t_list **a, t_list **b)
{
	t_list	*smallest;

	while ((*a)->next->next->next != NULL)
		pa(a, b);
	three_nodes(a);
	smallest = (*a);
	set_target_node(*a, *b, smallest);
}
