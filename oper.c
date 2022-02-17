/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:28:22 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/17 13:37:07 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack stack)
{
	int		tmp;

	if (ft_lstsize(*stack) > 1)
	{	
		tmp = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = tmp;
	}	
	
}

void	rotate_up(t_stack stack)
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
/*
void	rev_rotate(t_stack stack)
{
	t_list	*current;
	t_list	*old_top;
	t_list	*new_bottom;
	t_list	*new_top;

	current = *stack;
	old_top = *stack;
	while (current->next)
	{
		if (current->next->next == NULL)
		{
			new_bottom = current;
			new_top = current->next;
			break ;
		}
		current = current->next;	
	}
	printf("The new_bottom is %d\n", new_bottom->content);
	new_bottom->next = NULL;
	new_top->next = old_top;
	stack = &new_top;
	printf("The new top now is %d\n", (*stack)->content);
	printf("The new second now is %d\n", old_top->content);
	printf("The new bottom now is %d\n", new_bottom->content);
}
*/

void	rev_rotate(t_stack stack)
{
	t_list	*current;
	t_list	*penult;
	t_list	*last;

	current = *stack;
	while (current->next->next)
		current = current->next;
	penult = current;
	penult->next = NULL;
	printf("The top element now is %d\n", (*stack)->content);
	last = current->next;
	ft_lstadd_front(stack, last);
	printf("The last element now is %d\n", penult->content);
}