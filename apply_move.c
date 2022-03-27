/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:37:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 14:01:33 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_move(t_stack **a, t_stack **b, char *m)
{
	if (!ft_strcmp(m, "sa\n"))
		s(a);
	else if (!ft_strcmp(m, "sb\n"))
		s(b);
	else if (!ft_strcmp(m, "ss\n"))
		ss(a, b);
	else if (!ft_strcmp(m, "pa\n"))
		pa(a, b);
	else if (!ft_strcmp(m, "pb\n"))
		pb(b, a);
	else if (!ft_strcmp(m, "ra\n"))
		ra(a);
	else if (!ft_strcmp(m, "rb\n"))
		rb(b);
	else if (!ft_strcmp(m, "rr\n"))
		rr(a, b);
	else if (!ft_strcmp(m, "rra\n"))
		rra(a);
	else if (!ft_strcmp(m, "rrb\n"))
		rb(b);
	else if (!ft_strcmp(m, "rrr\n"))
		rrr(a, b);
	else
		display_error();
}
