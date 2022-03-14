/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:30 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/14 21:28:18 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_if_small(int p_num, t_list *a_stack, t_list *b_stack)
{
	
}

void	push_chunks(int *arr, int n)
{
	int p_num;
	int d;
	int i;

	i = 0;
	d = 4;
	if (n == 500)
		d = 8;
	while (++i <= d)
	{
		p_num = arr[n * i / d - 1];
		push_if_small(p_num, a_stack, b_stack);
	}
}
