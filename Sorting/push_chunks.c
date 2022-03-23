/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:30 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 16:14:53 by obouizga         ###   ########.fr       */
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

void	push_chunks(int *arr, int n, t_stack **a_stack, t_stack **b_stack)
{
	int	p;
	int	d;
	int	i;

	i = 1;
	d = 4;
	if (ft_lstsize(*a_stack) >= 250 && ft_lstsize(*a_stack) <= 500)
		d = 10;
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

/*
void	push_chunks(int *arr, int n, t_stack **a_stack, t_stack **b_stack)
{
	int	p;
	int	d;
	int	z;
	int	x;

	printf("push_chunks \n");
	d = 5;
	
	x = n / d;
	z = n;
	while (z > n / d)
	{
		p = arr[x - 1];
		printf("p is : %i\n", p);
		push_if_small(p, a_stack, b_stack);
		z = n - x;
		x = z / d + x;
	}
	re_index(a_stack);
	push_last_quarter(a_stack, b_stack);
	// tri_sort(a_stack, 'a');
	// get_back_to_a(a_stack, b_stack, n / d - 3);
	// pick_up(a_stack, b_stack);
}

 */