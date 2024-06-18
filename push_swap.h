/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:45:07 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/18 09:51:38 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "./utils/utils.h"
# include "./operations/operations.h"

void	small_sort(t_list **a);
void	sort(t_list **a, t_list **b);

#endif
