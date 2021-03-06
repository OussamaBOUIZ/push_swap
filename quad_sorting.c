/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quad_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:27:08 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quad_sorting(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*f_min_node;

	f_min_node = get_node(a_stack, find_min_index(a_stack));
	get_node_on_top(a_stack, f_min_node, 'a');
	push_to_b(b_stack, a_stack);
	re_index(a_stack);
	tri_sort(a_stack, 'a');
	push_to_a(a_stack, b_stack);
}
