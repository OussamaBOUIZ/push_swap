/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_both.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:15:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/24 10:26:04 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_both(t_stack **stack_a, t_stack **stack_b)
{
	int		tmp_a;
	int		tmp_b;

	if (ft_lstsize(*stack_a) > 1)
	{	
		tmp_a = (*stack_a)->content;
		(*stack_a)->content = (*stack_a)->next->content;
		(*stack_a)->next->content = tmp_a;
	}
	if (ft_lstsize(*stack_b) > 1)
	{	
		tmp_b = (*stack_b)->content;
		(*stack_b)->content = (*stack_b)->next->content;
		(*stack_b)->next->content = tmp_b;
	}
	ft_putstr("ss\n");
}
