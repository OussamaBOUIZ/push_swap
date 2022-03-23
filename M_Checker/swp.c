/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:23:34 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/22 11:26:33 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s(t_stack **stack)
{
	int		tmp;

	if (ft_lstsize(*stack) > 1)
	{	
		tmp = (*stack)->content;
		(*stack)->content = (*stack)->next->content;
		(*stack)->next->content = tmp;
	}
}

void	ss(t_stack **a, t_stack **b)
{
	s(a);
	s(b);
}
