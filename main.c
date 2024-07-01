/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:41:38 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/01 15:08:08 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_nodes(t_list **a)
{
	int	first;
	int	second;

	first = (*a)->value;
	second = (*a)->next->value;
	if (first > second)
		sa(a);
}

void	three_nodes(t_list **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && first > third)
	{
		ra(a);
		if (second > third)
			sa(a);
	}
	else if (first > second && first < third)
		sa(a);
	else if (third < second && third < first)
		rra(a);
	else if (second > first && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
}

void	which_sort(t_list **a, t_list **b)
{
	int	stack_size;

	stack_size = ft_lstsize(*a);
	if (stack_size == 2)
		two_nodes(a);
	else if (stack_size == 3)
		three_nodes(a);
	else if (stack_size == 4)
		return ;
	else if (stack_size == 5)
		return ;
	else
		push_swap(a, b);
}

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
		{
			free(argv[0]);
			return (1);
		}
		stack_init(&a, argv);
	}
	else
		stack_init(&a, argv + 1);
	check_if_sorted(a);
	which_sort(&a, &b);
	//printf("Stack 'a':\n");
	//while (a)
	//{
	//	printf("%d\n", a->value);
	//	a = a->next;
	//}
	//printf("Stack 'b':\n");
	//while (b)
	//{
	//	printf("%d\n", b->value);
	//	b = b->next;
	//}
	return (0);
}
