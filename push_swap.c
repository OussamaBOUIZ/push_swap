/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 07:28:50 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 15:04:27 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a_stack;
	t_stack	*b_stack;

	if (check_input(ac, av))
		return (1);
	a_stack = form_stack_a(av, ac);
	b_stack = NULL;
	main_sorting(&a_stack, &b_stack);
	// if (check_sorted_int(&a_stack))
	// 	printf("STACK'S SORTED\n");
	// else
	// 	printf("STACK AIN'T SORTED\n");
	// print_list(a_stack, 'A');
	return (0);
}
