/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:20:59 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/17 13:24:05 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	swap(t_list **a)
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
}
