/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:45:07 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/01 15:23:13 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "./utils/utils.h"
# include "./operations/operations.h"

void	two_nodes(t_list **a);
void	push_swap(t_list **a, t_list **b);
void	three_nodes(t_list **a);
void	check_if_sorted(t_list *a);
void	sort(t_list **a, t_list **b);
void	four_nodes(t_list **a, t_list **b);
void	five_nodes(t_list **a, t_list **b);

#endif
