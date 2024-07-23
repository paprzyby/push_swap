/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:04:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/22 12:55:47 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_for_int(char *str)
{
	unsigned int	i;
	unsigned int	minus;

	i = 0;
	minus = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] == '-')
		{
			minus++;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	if (minus > 1)
		return (1);
	return (0);
}

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

void	stack_init(t_list **stack, char **argv, bool check)
{
	long	num;
	int		n;
	t_list	*new_node;

	while (*argv)
	{
		if (check_for_int(*argv))
			error_handle(stack, argv, check);
		num = ft_atol(*argv);
		if (num > INT_MAX || num < INT_MIN)
			error_handle(stack, argv, check);
		n = num;
		if (check_for_repeat(*stack, n))
			error_handle(stack, argv, check);
		new_node = malloc(sizeof(t_list));
		if (!new_node)
			error_handle(stack, argv, check);
		new_node->value = num;
		new_node->next = NULL;
		ft_lstadd_back(stack, new_node);
		argv++;
	}
}
