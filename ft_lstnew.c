/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:52:52 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 14:06:01 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int content, int index)
{
	t_stack	*new_list;

	new_list = malloc(sizeof(t_stack));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->index = index;
	new_list->next = NULL;
	return (new_list);
}
