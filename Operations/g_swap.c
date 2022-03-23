/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:32:21 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 16:29:28 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	g_swap(t_stack **stack, char c)
{
	if (c == 'a')
		swap_a(stack);
	else if (c == 'b')
		swap_b(stack);
	else
		return ;
}
