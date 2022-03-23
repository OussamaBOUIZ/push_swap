/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:31:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/23 12:19:11 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <string.h>
# include <limits.h>

typedef t_list	t_stack;

t_stack	*form_stack_a(char **nums, int ac);
int		*convert_to_array(t_stack **stack);
int		ft_strcmp(char *s1, char *s2);
int		check_duplicate(char **nums, int n);
int		check_integer(char **nums, int n);
int		check_range(char **nums, int n);
int		check_sorted_av(char **nums, int n);
int		check_sorted_int(t_stack **stack);
void	display_error(void);
void	ft_putstr(char *s);
void	print_list(t_stack *head, char c);
void	print_node(t_stack *node);
void	push_to_a(t_stack **stack_a, t_stack **stack_b);
void	push_to_b(t_stack **stack_b, t_stack **stack_a);
void	swap_a(t_stack **stack);
void	swap_b(t_stack **stack);
void	swap_both(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack);
void	rotate_b(t_stack **stack);
void	rotate_both(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_a(t_stack **stack);
void	reverse_rotate_b(t_stack **stack);
void	reverse_rotate_both(t_stack **stack_a, t_stack **stack_b);
int		find_min_index(t_stack **stack);
void	basic_sorting(t_stack **a_stack, t_stack **b_stack, int n);
void	tri_sort(t_stack **a_stack, char c);
void	penta_sorting(t_stack **a_stack, t_stack **b_stack);
void	quad_sorting(t_stack **a_stack, t_stack **b_stack);
void	main_sorting(t_stack **a_stack, t_stack **b_stack);
t_stack	*get_node(t_stack **stack, int index);
int		get_index(t_stack *stack, int nbr);
void	get_node_on_top(t_stack **stack, t_stack *node, char c);
void	get_back_to_a(t_stack **a_stack, t_stack **b_stack, int n);
void	push_mins(t_stack **a_stack, t_stack **b_stack);
void	g_rotate(t_stack **stack, char c);
void	g_rev_rotate(t_stack **stack, char c);
void	g_rotate(t_stack **stack, char c);
void	g_swap(t_stack **stack, char c);
void	re_index(t_stack **stack);
void	bubble_sort(int *arr, int n);
void	swap(int *a, int *b);
void	push_chunks(int *arr, int n, t_list **a_stack, t_list **b_stack);
void	pick_up(t_stack **a_stack, t_stack **b_stack);
int		find_max_index(t_stack **stack);
int		check_input(int n, char **nums);
char	*get_next_line(int fd);
void	ft_putchar(char c);	
char	*ft_join_string(char *s1, char *s2);
char	*ft_substring(char *s, unsigned int start, size_t len);
size_t	ft_string_len(const char *str);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	ra(t_list **stack_a);
void	rb(t_stack **stack);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **stack);
void	rrb(t_stack **stack);
void	rrr(t_stack **a, t_stack **b);
void	s(t_stack **stack);
void	ss(t_stack **a, t_stack **b);

#endif