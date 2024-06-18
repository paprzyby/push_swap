/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:55:58 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/18 09:17:42 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	if ((*a)->next->next)
	{
		third = (*a)->next->next->value;
		if (first > second && first > third)
		{
			rotate(a);
			if (second > third)
				swap(a);
		}
		else if (first > second && first < third)
			swap(a);
		else if (third < second && third < first)
			rev_rotate(a);
		else if (second > first && second > third && first < third)
		{
			swap(a);
			rotate(a);
		}
	}
	else if (first > second)
		swap(a);
}
