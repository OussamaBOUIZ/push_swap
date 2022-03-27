/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:05:01 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 14:02:16 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_integer(char **nums, int n)
{
	int	i;

	i = 0;
	while (++i < n)
	{
		if (not_integer(nums[i]))
			return (1);
	}
	return (0);
}
