/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:53:15 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 14:06:09 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	t_stack	*current;
	int		i;

	if (!lst)
		return (0);
	current = lst;
	i = 1;
	while (current->next)
	{
		i++;
		current = current->next;
	}
	return (i);
}
