/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:05:01 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 16:31:36 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	not_integer(char *s)
{
	int	i;

	i = 0;
	if (s[i] != '-' && !ft_isdigit(s[i]))
		return (1);
	while (s[++i])
		if (!ft_isdigit(s[i]))
			return (1);
	return (0);
}

int	check_integer(char **nums, int n)
{
	int	i;

	i = 0;
	while (++i < n)
	{
		if (not_integer(nums[i]))
		{
			printf("Non Integer 👋\n");
			return (1);
		}
	}
	return (0);
}
