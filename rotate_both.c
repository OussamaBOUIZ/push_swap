/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:21:13 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 11:15:58 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rot_a(t_stack **stack)
{
	int		tmp;
	t_stack	*curr;

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

static void	rot_b(t_stack **stack)
{
	int		tmp;
	t_stack	*curr;

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

void	rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) > 1 && ft_lstsize(*stack_b) > 1)
	{
		rot_a(stack_a);
		rot_b(stack_b);
		ft_putstr("rr\n");
	}
}
