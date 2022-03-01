/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_rev_rottate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:26:43 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/01 15:03:23 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	g_rev_rotate(t_stack **stack, char c)
{
	if (c == 'a')
		reverse_rotate_a(stack);
	else if (c == 'b')
		reverse_rotate_b(stack);
	else
		return ;
}
