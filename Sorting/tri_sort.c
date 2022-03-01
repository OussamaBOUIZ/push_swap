/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:14:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/28 18:43:10 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	tri_sort(t_stack **a_stack)
// {
// 	int	min;
// 	int	mid;
// 	int	last;
// 	int first;

// 	first = (*a_stack)->content;
// 	mid = (*a_stack)->next->content;
// 	last = (*a_stack)->next->next->content;
// 	min = find_min_index(a_stack);
// 	if (min == 0)
// 	{
// 		reverse_rotate_a(a_stack);
// 		swap_a(a_stack);
// 	}
// 	else if (min == 1)
// 	{
// 		if (first > last)
// 			rotate_a(a_stack);
// 		else
// 			swap_a(a_stack);
// 	}
// 	else
// 	{
// 		if (first < mid)
// 			reverse_rotate_a(a_stack);
// 		else
// 		{
// 			swap_a(a_stack);
// 			reverse_rotate_a(a_stack);
// 		}
// 	}		
// }



void	tri_sort(t_stack **a_stack)
{
	int	min;
	int	mid;
	int	last;
	int first;

	first = (*a_stack)->content;
	mid = (*a_stack)->next->content;
	last = (*a_stack)->next->next->content;
	min = find_min_index(a_stack);
	if (min == 0)
	{
		reverse_rotate_a(a_stack);
		swap_a(a_stack);
	}
	else if (min == 1)
	{
		if (first > last)
			rotate_a(a_stack);
		else
			swap_a(a_stack);
	}
	else
	{
		if (first < mid)
			reverse_rotate_a(a_stack);
		else
		{
			swap_a(a_stack);
			reverse_rotate_a(a_stack);
		}
	}		
}
