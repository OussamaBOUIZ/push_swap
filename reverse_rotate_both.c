/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_both.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:46:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 11:14:30 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_a(t_stack **stack)
{
	t_stack	*new;
	t_stack	*list;
	int		data;
	t_stack	*node;

	list = *stack;
	while ((*stack)->next->next)
		*stack = (*stack)-> next;
	node = (*stack)->next;
	(*stack)->next = 0;
	data = node->content;
	new = ft_lstnew(data, 42);
	ft_lstadd_front(&list, new);
	(*stack) = list;
	free(node);
}

static void	rev_b(t_stack **stack)
{
	t_stack	*new;
	t_stack	*list;
	int		data;
	t_stack	*node;

	list = *stack;
	while ((*stack)->next->next)
		*stack = (*stack)-> next;
	node = (*stack)->next;
	(*stack)->next = 0;
	data = node->content;
	new = ft_lstnew(data, 42);
	ft_lstadd_front(&list, new);
	(*stack) = list;
	free(node);
}

void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) > 1 && ft_lstsize(*stack_b) > 1)
	{
		rev_a(stack_a);
		rev_b(stack_b);
		ft_putstr("rrr\n");
	}
}
