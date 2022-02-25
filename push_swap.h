/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:31:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/25 16:00:57 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <string.h>
# include <limits.h>

typedef t_list t_stack;

int		ft_strcmp(char *s1, char *s2);
int		check_duplicate(char **nums, int n);
int		check_integer(char **nums, int n);
int		check_range(char **nums, int n);
void	ft_putstr(char *s);
void	print_list(t_stack *head, char c);
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
#endif