/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:04:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/12 10:30:03 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *str)
{
	int		symbol;
	long	number;

	symbol = 1;
	number = 0;
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

void	error_handle(t_lst **stack)
{
	free(*stack);
	*stack = NULL;
	write(1, "Error\n", 6);
}

int	check_for_repeat(t_lst *stack, int num)
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

t_lst	*find_last_node(t_lst *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	create_node(t_lst **stack, int num)
{
	t_lst	*node;
	t_lst	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_lst));
	if (!node)
		return ;
	node->value = num;
	node->next = NULL;
	if (!*stack)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	stack_init(t_lst **stack, char **argv)
{
	long	num;

	while (*argv)
	{
		num = ft_atol(*argv);
		if (num > INT_MAX || num < INT_MIN)
		{
			error_handle(stack);
			return ;
		}
		if (check_for_repeat(*stack, (int)num))
		{
			error_handle(stack);
			return ;
		}
		create_node(stack, (int)num);
		argv++;
	}
}

//allocated memory:
//- ft_split (**argv)
//- t_lst **a(nodes)

//void	error_handle(t_lst **stack, char *argv)
//{
//	free(*stack);
//	free(argv);
//	write(1, "Error\n", 6);
//}

//t_lst	*find_last_node(t_lst *stack)
//{
//	if (!stack)
//		return;
//	while (stack->next)
//		stack = stack->next;
//	return (stack);
//}

//memory for the list is not
//properly free!!!