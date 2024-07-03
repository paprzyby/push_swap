/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:41:38 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/03 11:38:27 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_if_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (a->value > a->next->value)
			return ;
		a = a->next;
	}
	ft_lstclear(&a);
	exit(1);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv[1])
			return (free(argv[0]), 1);
		stack_init(&a, argv);
	}
	else
		stack_init(&a, argv + 1);
	check_if_sorted(a);
	sort(&a, &b);
	printf("Stack 'a':\n");
	while (a)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
	printf("Stack 'b':\n");
	while (b)
	{
		printf("%d\n", b->value);
		b = b->next;
	}
	return (0);
}
