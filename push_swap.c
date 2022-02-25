/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 07:28:50 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/25 15:54:10 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*form_stack_a(char **nums, int ac)
{
	t_stack	*node;
	int		i;

	node = ft_lstnew(ft_atoi(nums[1]));
	i = 1;
	while (++i < ac)
		ft_lstadd_back(&node, ft_lstnew(ft_atoi(nums[i])));
	return (node);
}

t_stack	*form_stack_b(char **nums, int ac)
{
	t_stack	*node;
	int		i;

	node = ft_lstnew(ft_atoi(nums[1]) * 3);
	i = 1;
	while (++i < ac)
		ft_lstadd_back(&node, ft_lstnew(ft_atoi(nums[i]) * 3));
	return (node);
}

void	print_list(t_stack *head, char c)
{
	t_stack	*curr;

	curr = head;
	printf("---\n");
	while (curr)
	{
		printf("[%d]\n", curr->content);
		curr = curr->next;
	}
	printf("---\n %c\n", c);
}

int	main(int ac, char **av)
{
	
	if (ac < 2)
		return (1);
	if (check_range(av, ac))
	{
		ft_putstr("Error: Out of Range\n");
		return (1);
	}
	if (check_duplicate(av, ac))
	{
		ft_putstr("Error: Duplicate\n");
		return (1);
	}
	if (check_integer(av, ac))
	{
		ft_putstr("Error: NOT DIGIT");
		return (1);
	}
	t_stack *a_stack = form_stack_a(av, ac);
	t_stack	*b_stack = form_stack_b(av, ac);
	print_list(a_stack, 'A');
	print_list(b_stack, 'B');
	
	return (0);
}
