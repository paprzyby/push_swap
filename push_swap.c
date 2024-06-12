/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:41:38 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/12 09:31:00 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_lst	*a;
	t_lst	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	stack_init(&a, argv + 1);
	while (a)
	{
		printf("%d. node\n", a->value);
		a = a->next;
	}
	return (0);
}
