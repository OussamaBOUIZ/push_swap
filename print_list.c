/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:15:59 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/28 12:05:49 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *head, char c)
{
	t_stack	*curr;

	curr = head;
	printf("---\n %c\n", c);
	while (curr)
	{
		printf("[%i]: | %d |\n", curr->index, curr->content);
		curr = curr->next;
	}
}
