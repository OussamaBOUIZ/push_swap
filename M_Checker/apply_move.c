/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:37:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/22 12:11:38 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



void	apply_move(t_stack **a, t_stack **b, char *m)
{
	if (!ft_strcmp(m, "sa"))
		s(a);
	else if (!ft_strcmp(m, "sb"))
		s(b);
	else if (!ft_strcmp(m, "ss"))
		ss(a, b);
	else if (!ft_strcmp(m, "pa"))
		pa(a, b);
	else if (!ft_strcmp(m, "pb"))
		pb(b, a);
	else if (!ft_strcmp(m, "ra"))
		ra(a);
	else if (!ft_strcmp(m, "rb"))
		rb(b);
	else if (!ft_strcmp(m, "rr"))
		rr(a, b);
	else if (!ft_strcmp(m, "rra"))
		rra(a);
	else if (!ft_strcmp(m, "rrb"))
		rb(b);
	else if (!ft_strcmp(m, "rrr"))
		rrr(a, b);
	else
		ft_putstr_fd("Error\n", 2);
}
