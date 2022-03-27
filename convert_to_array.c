/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:38:22 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*convert_to_array(t_stack **stack)
{
	int		*arr;
	int		size;
	t_stack	*curr;
	int		i;

	i = 0;
	curr = *stack;
	size = ft_lstsize(*stack);
	arr = malloc(sizeof(int) * size);
	while (curr)
	{
		arr[i] = curr->content;
		curr = curr->next;
		i++;
	}
	return (arr);
}
