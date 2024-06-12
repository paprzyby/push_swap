/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:04:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/12 12:53:57 by paprzyby         ###   ########.fr       */
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

t_list	*find_last_node(t_list *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	create_node(t_list **stack, int num)
{
	t_list	*node;
	t_list	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_list));
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

void	stack_init(t_list **stack, char **argv)
{
	long	num;

	while (*argv)
	{
		num = ft_atol(*argv);
		if (num > INT_MAX || num < INT_MIN)
		{
			ft_lstclear(stack);
			write(1, "Error\n", 6);
			return ;
		}
		if (check_for_repeat(*stack, (int)num))
		{
			ft_lstclear(stack);
			write(1, "Error\n", 6);
			return ;
		}
		create_node(stack, (int)num);
		argv++;
	}
}

//allocated memory:
//- ft_split (**argv)
//- t_list **a(nodes)

//void	error_handle(t_list **stack, char *argv)
//{
//	free(*stack);
//	free(argv);
//	write(1, "Error\n", 6);
//}

//t_list	*find_last_node(t_list *stack)
//{
//	if (!stack)
//		return;
//	while (stack->next)
//		stack = stack->next;
//	return (stack);
//}

//memory for the list is not
//properly free!!!

//void	error_handle(t_list **stack)
//{
//	free(*stack);
//	*stack = NULL;
//	write(1, "Error\n", 6);
//}