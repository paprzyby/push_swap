/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:41:38 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/24 15:53:33 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		ra(a, false);
		if (second > third)
			sa(a, false);
	}
	else if (first > second && first < third)
		sa(a, false);
	else if (third < second && third < first)
		rra(a, false);
	else if (second > first && second > third && first < third)
	{
		sa(a, false);
		ra(a, false);
	}
}

bool	check_if_sorted(t_list **a)
{
	t_list	*head;

	head = *a;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (true);
		head = head->next;
	}
	ft_lstclear(a);
	write(1, "OK\n", 3);
	return (false);
}

void	which_sort(t_list **a, t_list **b)
{
	int	stack_size;

	if (!check_if_sorted(a))
		exit(0);
	stack_size = ft_lstsize(*a);
	if (stack_size == 2)
		sa(a, false);
	else if (stack_size == 3)
		three_nodes(a);
	else
	{
		push_swap(a, b);
		ft_lstclear(b);
	}
	ft_lstclear(a);
}

void	free_the_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**splitted;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	if (argc == 2)
	{
		splitted = ft_split(argv[1], ' ');
		if (!splitted[1])
			free_the_split(splitted);
		stack_init(&a, splitted, true);
	}
	else
		stack_init(&a, argv + 1, false);
	which_sort(&a, &b);
	return (0);
}
