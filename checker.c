/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:22:21 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 14:44:33 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker(int n, char **nums)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	char	*move;

	a_stack = form_stack_a(nums, n);
	b_stack = NULL;
	move = get_next_line(0);
	while (move)
	{
		apply_move(&a_stack, &b_stack, move);
		move = get_next_line(0);
	}
	if (check_sorted_int(&a_stack) && !b_stack)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int	main(int ac, char **av)
{
	if (check_input_two(ac, av))
		display_error();
	checker(ac, av);
	return (0);
}
