/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:04:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/10 13:21:07 by paprzyby         ###   ########.fr       */
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

void	error_free(t_list **a, long num)
{

}

int	check_for_repeat(t_list **a, int num)
{

}

void	stack_innit(t_list **a, char **argv)
{
	long	num;

	while (*argv)
	{
		num = ft_atol(*argv);
		if (num > INT_MAX || num < INT_MIN)
			error_free(a, argv);
		if (check_for_repeat(*a, (int)num))
			error_free(a, argv);
		argv++;
	}
	return (0);
}
