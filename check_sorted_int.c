/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:19:10 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/28 13:58:36 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted_int(t_stack **stack)
{
	int	*arr;
	int	i;
	int	size;

	size = ft_lstsize(*stack);
	arr = convert_to_array(stack);
	i = 0;
	while (i < size - 1 && arr[i] < arr[i + 1])
		i++;
	if (i == size - 1)
	{
		free(arr);
		return (1);
	}
	free(arr);
	return (0);
}
