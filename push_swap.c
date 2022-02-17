/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 07:28:50 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/17 12:18:30 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	form_stack(char	**nums, int ac)
{
	t_stack	a;
	t_list	*node;
	size_t	i;

	node = ft_lstnew(ft_atoi(nums[1]));
	a = &node;
	i = 2;
	while (i < ac)
	{
		ft_lstadd_back(a, ft_lstnew(ft_atoi(nums[i])));
		i++;
	}
	return (a);
}

void	print_list(t_list **head)
{
	t_list	*curr;

	curr = *head;
	while (curr)
	{
		printf("%d\n", curr->content);
		curr = curr->next;
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	t_stack nums = form_stack(av, ac);
	print_list(nums);
	rev_rotate(nums);
	// print_list(nums);
	return (0);
}

