/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:02:55 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 11:11:59 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_stack **stack)
{
	t_stack	*tmp;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = *stack;
		*stack = tmp->next;
		tmp->next = 0;
		ft_putstr("rrb\n");
	}
}
