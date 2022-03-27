/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 11:20:57 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 14:02:35 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*curr;
	t_stack	*keep;

	curr = *stack;
	while (curr)
	{
		keep = curr->next;
		free(curr);
		curr = keep;
	}
}
