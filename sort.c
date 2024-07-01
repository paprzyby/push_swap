/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/01 13:12:09 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_node(t_list *a, t_list *b, t_list *smallest)
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

void	sort(t_list **a, t_list **b)
{
	t_list	*smallest;

	while ((*a)->next->next->next != NULL)
		pa(a, b);
	small_sort(a);
	smallest = (*a);
	set_target_node(a, b, smallest);
}

//void	sort(t_list **a, t_list **b)
//{
//	int	big;
//	int	small;
//	int tmp;

//	pa(a, b);
//	pa(a, b);
//	big = (*b)->value;
//	small = (*b)->next->value;
//	if (big < small)
//		sb(b);
//	while ((*a)->next != NULL)
//	{
//		tmp = (*a)->value;
//		pa(a, b);
//		if (tmp < small)
//		{
//			rb(b);
//			small = tmp;
//		}
//		else if (tmp < big)
//			sb(b);
//		else
//			big = tmp;
//		(*a) = (*a)->next;
//	}
//}