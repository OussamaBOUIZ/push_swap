/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 07:28:50 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/02 17:37:25 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
	(void)ac;
	t_stack *a_stack = form_stack_a(av, ac);
	t_stack *b_stack = NULL;
	print_list(a_stack, 'A');
	if (ft_lstsize(a_stack) == 3)
		tri_sort(&a_stack);
	if (ft_lstsize(a_stack) == 5)
		penta_sorting(&a_stack, &b_stack);
	print_list(a_stack, 'A');
	return (0);
}
