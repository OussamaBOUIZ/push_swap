/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:27:16 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 08:59:50 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*tmp;

	if (ft_lstsize(*stack_a) > 1)
	{
		tmp = *stack_a;
		(*stack_a) = (*stack_a)->next;
		tmp->next = NULL;
		ft_lstadd_back(stack_a, tmp);
	}
}

void	rb(t_stack **stack)
{
	int		tmp;
	t_stack	*curr;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = (*stack)->content;
		curr = *stack;
		while (curr)
		{
			if (!(curr->next))
			{
				curr->content = tmp;
				break ;
			}
			curr->content = curr->next->content;
			curr = curr->next;
		}
	}
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}
