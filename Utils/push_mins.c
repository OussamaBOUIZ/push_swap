/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:15:14 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 12:16:45 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_mins(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*curr;
	t_stack	*min;
	int		size;

	size = ft_lstsize(*a_stack);
	curr = *a_stack;
	while (size > 3)
	{
		re_index(a_stack);
		min = get_node(a_stack, find_min_index(a_stack));
		get_node_on_top(a_stack, min, 'a');
		push_to_b(b_stack, a_stack);
		size--;
	}
}
