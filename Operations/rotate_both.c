/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_both.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:21:13 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/24 10:44:58 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ra(t_stack **stack)
{
	int		tmp;
	t_list	*curr;

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

static void	rb(t_stack **stack)
{
	int		tmp;
	t_list	*curr;
	

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

void	rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_putstr("rr\n");
}
