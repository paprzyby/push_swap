/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:47:15 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/22 13:52:00 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(OPERATIONS_H)
# define OPERATIONS_H

# include <unistd.h>
# include <stdlib.h>
# include "../utils/utils.h"

void	reverse_rotate(t_list **stack);
void	ss(t_list **a, t_list **b, bool check);
void	sa(t_list **a, bool check);
void	sb(t_list **b, bool check);
void	pb(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b, bool check);
void	ra(t_list **a, bool check);
void	rb(t_list **a, bool check);
void	rrr(t_list **a, t_list **b, bool check);
void	rra(t_list **a, bool check);
void	rrb(t_list **a, bool check);

#endif
