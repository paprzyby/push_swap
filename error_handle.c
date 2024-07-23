/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:32:11 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/22 12:59:39 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handle(t_list **stack, char **argv, bool check)
{
	int	i;

	i = 0;
	ft_lstclear(stack);
	if (check)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
	}
	write(1, "Error\n", 6);
	exit(1);
}
