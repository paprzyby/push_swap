/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:36:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/25 14:39:55 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rb(t_list **a)
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
	write(1, "rb\n", 3);
}

void	ra(t_list **a)
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
	write(1, "ra\n", 3);
}
