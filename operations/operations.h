/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:47:15 by paprzyby          #+#    #+#             */
/*   Updated: 2024/06/17 09:50:52 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(OPERATIONS_H)
# define OPERATIONS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../utils/utils.h"

void	push(t_list **a, t_list **b);
void	rotate(t_list **a);

#endif
