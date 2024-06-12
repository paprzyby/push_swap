/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:41:38 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/12 14:09:24 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list			*a;
	t_list			*b;
	unsigned int	count;

	a = NULL;
	b = NULL;
	count = 0;
	if (argc == 1)
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		while (argv[count] != NULL)
			count++;
		if (count == 1)
		{
			free(argv);
			return (1);
		}
		stack_init(&a, argv);
	}
	else
		stack_init(&a, argv + 1);
	while (a)
	{
		printf("Node = %d\n", a->value);
		a = a->next;
	}
	return (0);
}
