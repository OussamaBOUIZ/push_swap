/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:03:56 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	re_index(t_stack **stack)
{
	t_stack	*curr;
	int		i;

	if (!(*stack))
		return ;
	i = 0;
	curr = *stack;
	while (curr)
	{
		curr->index = i;
		curr = curr->next;
		i++;
	}
}
