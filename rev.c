/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:32:30 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/28 11:22:26 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack)
{
	t_stack	*tmp;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = *stack;
		*stack = tmp->next;
		tmp->next = NULL;
	}
}

void	rrb(t_stack **stack)
{
	t_stack	*tmp;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = *stack;
		*stack = tmp->next;
		tmp->next = NULL;
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}
