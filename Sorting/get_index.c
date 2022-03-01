/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:41:11 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/01 10:43:49 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index(t_stack **stack, t_stack *node)
{
	t_stack *curr;
	
	curr = *stack;
	while (curr)
	{
		if (curr->content == node->content)
			return (curr->index);
		curr = curr->next;
	}
	return (-1);
}
