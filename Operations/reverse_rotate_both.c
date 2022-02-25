/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_both.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:46:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/24 10:25:38 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rra(t_stack **stack)
{
	t_list	*new;
	t_list	*list;
	int		data;
	t_list	*node;

	list = *stack;
	while ((*stack)->next->next)
		*stack = (*stack)-> next;
	node = (*stack)->next;
	(*stack)->next = 0;
	data = node->content;
	new = ft_lstnew(data);
	ft_lstadd_front(&list, new);
	(*stack) = list;
	free(node);
}

static void	rrb(t_stack **stack)
{
	t_list	*new;
	t_list	*list;
	int		data;
	t_list	*node;

	list = *stack;
	while ((*stack)->next->next)
		*stack = (*stack)-> next;
	node = (*stack)->next;
	(*stack)->next = 0;
	data = node->content;
	new = ft_lstnew(data);
	ft_lstadd_front(&list, new);
	(*stack) = list;
	free(node);
}

void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putstr("rrr\n");
}
