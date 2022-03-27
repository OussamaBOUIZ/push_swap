/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:04:20 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_node(t_stack **stack, int index)
{
	t_stack	*curr;

	curr = *stack;
	if (index <= ft_lstsize(*stack))
	{
		while (curr)
		{
			if (curr->index == index)
				return (curr);
			curr = curr->next;
		}
	}
	return (NULL);
}
