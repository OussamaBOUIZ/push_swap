/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 14:56:49 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_index(t_stack **stack)
{
	t_stack	*curr;
	int		max[2];

	curr = *stack;
	max[0] = curr->index;
	max[1] = curr->content;
	while (curr->next)
	{
		if (max[1] < curr->next->content)
		{
			max[1] = curr->next->content;
			max[0] = curr->next->index;
		}
		curr = curr->next;
	}
	return (max[0]);
}
