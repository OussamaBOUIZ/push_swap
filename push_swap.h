/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:31:40 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/15 11:13:33 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <string.h>

typedef t_list	**t_stack;
t_stack	form_stack(char	**nums, int ac);
void	swap(t_stack stack);
void	rotate_up(t_stack stack);
void	rev_rotate(t_stack stack);
#endif