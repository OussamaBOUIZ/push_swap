/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:14:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	g_swap_rev_rotate(t_stack **stack, char c)
{
	g_swap(stack, c);
	g_rev_rotate(stack, c);
}

static void	g_rev_swap_rotate(t_stack **stack, char c)
{
	g_rev_rotate(stack, c);
	g_swap(stack, c);
}

static void	first_less_mid(int first, int mid, t_stack **stack, char c)
{
	if (first < mid)
		g_rev_rotate(stack, c);
	else
		g_swap_rev_rotate(stack, c);
}

void	tri_sort(t_stack **stack, char c)
{
	int	min;
	int	mid;
	int	last;
	int	first;

	if (check_sorted_int(stack))
		return ;
	first = (*stack)->content;
	mid = (*stack)->next->content;
	last = (*stack)->next->next->content;
	min = find_min_index(stack);
	if (min == 0)
		g_rev_swap_rotate(stack, c);
	else if (min == 1)
	{
		if (first > last)
			rotate_a(stack);
		else
			g_swap(stack, c);
	}
	else
		first_less_mid(first, mid, stack, c);
}
