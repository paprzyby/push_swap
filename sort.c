/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/28 17:51:04 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b)
{
	int	big;
	int	small;
	int tmp;

	pa(a, b);
	pa(a, b);
	big = (*b)->value;
	small = (*b)->next->value;
	if (big < small)
		sb(b);
	while ((*a)->next != NULL)
	{
		tmp = (*a)->value;
		pa(a, b);
		if (tmp < small)
		{
			rb(b);
			small = tmp;
		}
		else if (tmp < big)
			sb(b);
		else
			big = tmp;
		(*a) = (*a)->next;
	}
}