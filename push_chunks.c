/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:30 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 09:40:58 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_if_small(int p_num, t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*curr;

	curr = *a_stack;
	while (curr)
	{
		if (curr->content <= p_num)
		{
			get_node_on_top(a_stack, curr, 'a');
			push_to_b(b_stack, a_stack);
			curr = *a_stack;
		}
		else
			curr = curr->next;
	}
}

void	push_chunks(int *arr, int n, t_stack **a_stack, t_stack **b_stack)
{
	int	p;
	int	d;
	int	i;

	i = 1;
	d = 4;
	if (ft_lstsize(*a_stack) >= 250 && ft_lstsize(*a_stack) <= 500)
		d = 8;
	while (i < d)
	{
		p = arr[n * i / d - 1];
		push_if_small(p, a_stack, b_stack);
		i++;
	}
	re_index(a_stack);
	push_mins(a_stack, b_stack);
	re_index(a_stack);
	tri_sort(a_stack, 'a');
	get_back_to_a(a_stack, b_stack, n / d - 3);
	pick_up(a_stack, b_stack);
}
