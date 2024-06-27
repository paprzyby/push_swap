/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/27 17:20:07 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b)
{
	int	big;
	int	small;
	int tmp;
	t_list	*head;

	pa(a, b);
	pa(a, b);
	head = *a;
	big = (*b)->value;
	small = (*b)->next->value;
	if (big < small)
	{
		tmp = big;
		big = small;
		small = tmp;
		sb(b);
	}
	while ((*a)->next->next->next != NULL)
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
	small_sort(a);
	//small = head->value;
	//big = (*a)->next->next->value;
	//while ((*b) != NULL)
	//{
	//	tmp = (*b)->value;
	//	pb(a, b);
	//	if (tmp < small)
	//	{
	//		ra(a);
	//		small = tmp;
	//	}
	//	else if (tmp < big)
	//		sa(a);
	//	else
	//		big = tmp;
	//	(*b) = (*b)->next;
	//}
}

//void	sort(t_list **a, t_list **b)
//{
//	while ((*a)->next->next->next != NULL)
//		pa(a, b);
//	small_sort(a);
//}