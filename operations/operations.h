/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:47:15 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/25 14:41:03 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(OPERATIONS_H)
# define OPERATIONS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../utils/utils.h"

void	sa(t_list **a);
void	sb(t_list **a);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **a);
void	rra(t_list **a);
void	rrb(t_list **a);

#endif
