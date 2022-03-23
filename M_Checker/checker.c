/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:22:21 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/22 14:38:02 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		move = get_next_line(0);
		apply_move(&a_stack, &b_stack, move);
	}
	if (check_sorted_int(&a_stack))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int	main(int ac, char **av)
{
	if (!check_input(ac, av))
		ft_putstr_fd("Error\n", 2);
	checker(ac, av);
	return (0);
}
