/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted_av.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:19:10 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/22 22:21:26 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sorted_av(char **nums, int n)
{
	int	i;

	i = 1;
	while (i < n - 1 && (ft_atoi(nums[i]) < ft_atoi(nums[i + 1])))
		i++;
	if (i == n - 1)
	{
		printf("Already sorted 😉\n");
		return (1);
	}
	return (0);
}
