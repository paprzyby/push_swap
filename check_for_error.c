/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:04:00 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/07 17:24:32 by paprzyby         ###   ########.fr       */
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

void	check_for_error(char **argv)
{
	long	num;

	while (*argv)
	{
		num = ft_atol(*argv);
		if (num > INT_MAX || num < INT_MIN)
		{

		}
	}
}
