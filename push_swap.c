/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/11 17:32:13 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **a, t_list **b)
{
	t_list	*smallest;

	while ((*a)->next->next->next != NULL)
		pb(a, b);
	three_nodes(a);
	while (b)
	{
		set_node_position(*a);
		set_node_position(*b);
		set_target_node(*a, *b);
		set_the_price(*a, *b);
		set_the_cheapest(*b);
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
