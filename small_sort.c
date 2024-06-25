/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:55:58 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/25 15:09:52 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_nodes(t_list **a, int first, int second)
{
	int	third;

	third = (*a)->next->next->value;
	if (first > second && first > third)
	{
		ra(a);
		if (second > third)
			sa(a);
	}
	else if (first > second && first < third)
		sa(a);
	else if (third < second && third < first)
		rra(a);
	else if (second > first && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
}

void	small_sort(t_list **a)
{
	int	first;
	int	second;

	first = (*a)->value;
	second = (*a)->next->value;
	if ((*a)->next->next)
		three_nodes(a, first, second);
	else if (first > second)
		sa(a);
}
