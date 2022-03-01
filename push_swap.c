/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 07:28:50 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/01 16:23:06 by obouizga         ###   ########.fr       */
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

t_stack	*form_stack_b(char **nums, int ac)
{
	t_stack	*node;
	int		i;

	node = ft_lstnew(ft_atoi(nums[1]) * 3, 0);
	i = 1;
	while (++i < ac)
		ft_lstadd_back(&node, ft_lstnew(ft_atoi(nums[i]) * 3, i - 1));
	return (node);
}
void	print_node (t_stack *node)
{
	printf("[%i]: | %d |\n",node->index, node->content);
}

void	print_list(t_stack *head, char c)
{
	t_stack	*curr;

	curr = head;
	printf("---\n");
	while (curr)
	{
		printf("[%i]: | %d |\n",curr->index, curr->content);
		curr = curr->next;
	}
	printf("---\n %c\n", c);
}

int	main(int ac, char **av)
{
	t_stack *a_stack = form_stack_a(av, ac);
	t_stack *b_stack = NULL;
	
	print_list(a_stack, 'A');
	if (ft_lstsize(a_stack) == 3)
	{
		tri_sort(&a_stack);
		print_list(a_stack, 'A');
	}
	t_stack *f_min_node = get_node(&a_stack, find_min_index(&a_stack));
	get_node_on_top(&a_stack, f_min_node, 'a');
	push_to_b(&b_stack, &a_stack);
	f_min_node = get_node(&a_stack, find_min_index(&a_stack));
	get_node_on_top(&a_stack, f_min_node, 'a');
	push_to_b(&b_stack, &a_stack);
	print_list(a_stack, 'A');
	
	return (0);
}
