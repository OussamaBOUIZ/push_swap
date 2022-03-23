/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node_on_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:37:39 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 16:27:40 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_node_on_top(t_stack **stack, t_stack *node, char c)
{
	int	index;
	int	size;
	int	i;

	index = get_index(*stack, node->content);
	size = ft_lstsize(*stack);
	if (index < 0)
		return ;
	if (index < (size / 2))
	{
		i = 0;
		while (++i <= index)
			g_rotate(stack, c);
	}
	else
	{
		i = 0;
		while (++i <= size - index)
			g_rev_rotate(stack, c);
	}
}
