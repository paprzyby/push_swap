/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:32:11 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/17 09:51:20 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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

int	error_handle(t_list **stack)
{
	ft_lstclear(stack);
	write(1, "Error\n", 6);
	exit(1);
}
