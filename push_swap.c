/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 07:28:50 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/19 15:38:42 by obouizga         ###   ########.fr       */
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
	printf("---\n %c\n", c);
	while (curr)
	{
		printf("[%i]: | %d |\n",curr->index, curr->content);
		curr = curr->next;
	}

}

int	main(int ac, char **av)
{
	(void)ac;
	//t_stack *head;
	t_stack *a_stack = form_stack_a(av, ac);
	t_stack *b_stack = NULL;
	int *arr = convert_to_array(&a_stack);
	int n = ft_lstsize(a_stack);
	bubble_sort(arr, n);
	// print_list(a_stack, 'A');
	push_chunks(arr, n, &a_stack, &b_stack);
	pick_up(&a_stack, &b_stack);
	tri_sort(&b_stack, 'b');
	// rotate_b(&b_stack);
	// rotate_b(&b_stack);
	print_list(a_stack, 'A');
	print_list(b_stack, 'B');
	return (0);
}
