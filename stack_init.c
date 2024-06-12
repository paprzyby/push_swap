/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:04:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/12 14:41:31 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *str, t_list **stack)
{
	int		symbol;
	long	number;

	symbol = 1;
	number = 0;
	if (*str != '-' && (*str < '0' || *str > '9'))
		error_handle(stack);
	if (*str == '-')
	{
		symbol = symbol * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * symbol);
}

int	check_for_repeat(t_list *stack, int num)
{
	if (!stack)
		return (0);
	while (stack)
	{
		if (stack->value == num)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	create_node(t_list **stack, int num)
{
	t_list	*node;
	t_list	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_list));
	if (!node)
		error_handle(stack);
	node->value = num;
	node->next = NULL;
	if (!*stack)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = ft_lstlast(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	stack_init(t_list **stack, char **argv)
{
	long	num;

	while (*argv)
	{
		num = ft_atol(*argv, stack);
		if (num > INT_MAX || num < INT_MIN)
			error_handle(stack);
		if (check_for_repeat(*stack, (int)num))
			error_handle(stack);
		create_node(stack, (int)num);
		argv++;
	}
}

//allocated memory:
//- ft_split (**argv)
//- t_list **a(nodes)

//to do:
//memory for the list is not
//properly freed (whats inside the node)!!!
//replace some returns with exit
//free everything if an error appeard