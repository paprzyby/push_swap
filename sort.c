/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:13:22 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/02 09:14:17 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_nodes(t_list **a, t_list **b)
{
	pb(a, b);
	pb(a, b);
	three_nodes(a);
}

void	four_nodes(t_list **a, t_list **b)
{
	pb(a, b);
	three_nodes(a);
}

void	three_nodes(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && first > third)
	{
		ra(a, false);
		if (second > third)
			sa(a, false);
	}
	else if (first > second && first < third)
		sa(a, false);
	else if (third < second && third < first)
		rra(a, false);
	else if (second > first && second > third && first < third)
	{
		sa(a, false);
		ra(a, false);
	}
}

void	two_nodes(t_list **a)
{
	int	first;
	int	second;

	first = (*a)->value;
	second = (*a)->next->value;
	if (first > second)
		sa(a, false);
}

void	sort(t_list **a, t_list **b)
{
	int	stack_size;

	stack_size = ft_lstsize(*a);
	if (stack_size == 2)
		two_nodes(a);
	else if (stack_size == 3)
		three_nodes(a);
	else if (stack_size == 4)
		four_nodes(a, b);
	else if (stack_size == 5)
		five_nodes(a, b);
	else
		push_swap(a, b);
}