/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:46:56 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*form_stack_a(char **nums, int ac)
{
	t_stack	*node;
	int		i;

	node = ft_lstnew(ft_atoi(nums[1]), 0);
	i = 1;
	while (++i < ac)
		ft_lstadd_back(&node, ft_lstnew(ft_atoi(nums[i]), i - 1));
	return (node);
}
