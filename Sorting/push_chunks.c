/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:30 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/19 15:34:40 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

static void	push_last_quarter(t_stack **a_stack, t_stack **b_stack)
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
		// curr = *a_stack;
		size--;
	}
}

static void	get_back_to_a(t_stack **a_stack, t_stack **b_stack, int n)
{
	while (n--)
		push_to_a(a_stack, b_stack);
}

void	push_chunks(int *arr, int n, t_stack **a_stack, t_stack **b_stack)
{
	int	p;
	int	d;
	int	i;

	i = 1;
	d = 4;
	while (i < d)
	{
		p = arr[n * i / d - 1];
		push_if_small(p, a_stack, b_stack);
		i++;
	}
	// re_index(a_stack);
	push_last_quarter(a_stack, b_stack);
	tri_sort(a_stack, 'a');
	get_back_to_a(a_stack, b_stack,  n / d - 3);
}
