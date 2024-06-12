/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:09:55 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/12 13:06:26 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_list **stack)
{
	t_list	*current;

	if (!stack)
		return ;
	while (*stack)
	{
		current = (*stack)->next;
		free(*stack);
		*stack = current;
	}
	*stack = NULL;
}
