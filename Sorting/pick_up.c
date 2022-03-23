/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:12:57 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/19 19:02:12 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pick_up(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*max;
	int		size;

	size = ft_lstsize(*b_stack);
	while (size > 1)
	{
		re_index(b_stack);
		max = get_node(b_stack, find_max_index(b_stack));
		get_node_on_top(b_stack, max, 'b');
		push_to_a(a_stack, b_stack);
		size--;
	}
	push_to_a(a_stack, b_stack);
}
