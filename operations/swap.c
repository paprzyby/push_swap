/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:20:59 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/02 09:05:15 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	sb(t_list **b, bool check)
{
	t_list	*first_node;
	t_list	*second_node;

	if (!*b || (*b)->next == NULL)
		return ;
	first_node = *b;
	second_node = (*b)->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	first_node->prev = second_node;
	if (*b == first_node)
		*b = second_node;
	if (!check)
		write(1, "sb\n", 3);
}

void	sa(t_list **a, bool check)
{
	t_list	*first_node;
	t_list	*second_node;

	if (!*a || (*a)->next == NULL)
		return ;
	first_node = *a;
	second_node = (*a)->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	first_node->prev = second_node;
	if (*a == first_node)
		*a = second_node;
	if (!check)
		write(1, "sa\n", 3);
}

void	ss(t_list **a, t_list **b, bool check)
{
	sa(a, true);
	sb(b, true);
	if (!check)
		write(1, "ss\n", 3);
}
