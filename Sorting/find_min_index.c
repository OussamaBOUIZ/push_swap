/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:39:59 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/28 18:32:41 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min_index(t_stack **stack)
{
	t_stack	*curr;
	int		min[2];

	curr = *stack;
	min[0] = curr->index;
	min[1] = curr->content;
	while (curr->next)
	{
		if (min[1] > curr->next->content)
		{
			min[1] = curr->next->content;
			min[0] = curr->next->index;
		}
		curr = curr->next;
	}
	return (min[0]);
}
