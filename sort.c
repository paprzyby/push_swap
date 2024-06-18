/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:42:31 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/18 10:21:45 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a, t_list **b)
{
	while ((*a)->next->next->next != NULL)
		push(a, b);
	small_sort(a);
	set_target_node(a, b);
}
