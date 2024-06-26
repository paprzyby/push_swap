/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:41:38 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/26 16:02:22 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
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
		{
			free(argv[0]);
			return (1);
		}
		stack_init(&a, argv);
	}
	else
		stack_init(&a, argv + 1);
	if (argc <= 4)
		small_sort(&a);
	else
		sort(&a, &b);
	printf("Stack 'a':\n");
	while (a)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
	//printf("\nStack 'b':\n");
	//while (b)
	//{
	//	printf("%d\n", b->value);
	//	b = b->next;
	//}
	return (0);
}
