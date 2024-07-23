/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:36:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/23 16:14:44 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rb(t_list **a, bool check)
{
	t_list	*last_node;

	if (!*a)
		return ;
	last_node = ft_lstlast(*a);
	last_node->next = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
	if (!check)
		write(1, "rb\n", 3);
}

void	ra(t_list **a, bool check)
{
	t_list	*last_node;

	if (!*a)
		return ;
	last_node = ft_lstlast(*a);
	last_node->next = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
	if (!check)
		write(1, "ra\n", 3);
}

void	rr(t_list **a, t_list **b, bool check)
{
	ra(a, true);
	rb(b, true);
	if (!check)
		write(1, "rr\n", 3);
}
