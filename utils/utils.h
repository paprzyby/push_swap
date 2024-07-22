/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paprzyby <paprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:28:53 by paprzyby          #+#    #+#             */
/*   Updated: 2024/07/22 08:36:48 by paprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(UTILS_H)
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_list
{
	int				value;
	int				current_position;
	int				push_price;
	bool			top_bot;
	bool			cheapest;
	struct s_list	*next;
	struct s_list	*prev;
	struct s_list	*target_node;
}					t_list;

char	**ft_split(char const *s, char c);
void	ft_lstclear(t_list **stack);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif
