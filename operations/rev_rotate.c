/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:29:52 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/25 14:40:53 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rrb(t_list **a)
{
	t_list	*last_node;

	if (!*a)
		return ;
	last_node = ft_lstlast(*a);
	(*a)->prev = last_node;
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	last_node->next = *a;
	*a = last_node;
	write(1, "rrb\n", 4);
}

void	rra(t_list **a)
{
	t_list	*last_node;

	if (!*a)
		return ;
	last_node = ft_lstlast(*a);
	(*a)->prev = last_node;
	last_node->prev->next = NULL;
	last_node->prev = NULL;
	last_node->next = *a;
	*a = last_node;
	write(1, "rra\n", 4);
}
