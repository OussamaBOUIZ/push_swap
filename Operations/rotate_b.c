/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:11:27 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/24 10:25:47 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_stack **stack)
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
	ft_putstr("rb\n");
}
