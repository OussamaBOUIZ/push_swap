/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:22:47 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 14:08:08 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int n, char **nums)
{
	if (n == 1)
		exit(0);
	if (check_integer(nums, n) || check_range(nums, n) || \
	check_duplicate(nums, n))
	{
		printf("we love you\n");
		display_error();
	}
	else if (check_sorted_av(nums, n))
		exit (0);
	return (0);
}
