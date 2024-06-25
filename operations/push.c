/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:36:02 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/25 14:39:05 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	pb(t_list **a, t_list **b)
{
	t_list	*node_to_push;

	if (!*a)
		return ;
	node_to_push = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	node_to_push->prev = NULL;
	if (!*b)
	{
		*b = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *b;
		node_to_push->next->prev = node_to_push;
		*b = node_to_push;
	}
	write(1, "pb\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*node_to_push;

	if (!*a)
		return ;
	node_to_push = *a;
	*a = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	node_to_push->prev = NULL;
	if (!*b)
	{
		*b = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *b;
		node_to_push->next->prev = node_to_push;
		*b = node_to_push;
	}
	write(1, "pb\n", 3);
}
