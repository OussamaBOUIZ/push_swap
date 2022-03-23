/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:28:49 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 16:30:57 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_duplicate(char **nums, int n)
{
	int	i;
	int	j;

	i = 1;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (!ft_strcmp(nums[i], nums[j]))
			{
				printf("duplicate 👋\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
