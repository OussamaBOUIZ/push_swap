/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 22:26:17 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 16:17:26 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	main_sorting(t_stack **a_stack, t_stack **b_stack)
{
	int	size;
	int	*arr;	

	size = ft_lstsize(*a_stack);
	arr = convert_to_array(a_stack);
	if (size == 2)
		swap_a(a_stack);
	else if (size == 3)
		tri_sort(a_stack, 'a');
	else if (size == 4)
		quad_sorting(a_stack, b_stack);
	else if (size == 5)
		penta_sorting(a_stack, b_stack);
	else if (size > 5 && size < 100)
		basic_sorting(a_stack, b_stack, size);
	else if (size >= 100)
	{
		bubble_sort(arr, size);
		push_chunks(arr, size, a_stack, b_stack);
	}
}
