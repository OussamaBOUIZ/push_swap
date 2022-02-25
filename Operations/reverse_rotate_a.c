/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:02:55 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/24 10:25:30 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_stack **stack)
{
	t_stack	*tmp;

	if (ft_lstsize(*stack) > 1)
	{
		tmp = *stack;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp->next->next = *stack;
		*stack = tmp->next;
		tmp->next = NULL;
		ft_putstr("rra\n");
	}
}
