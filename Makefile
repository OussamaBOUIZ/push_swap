# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 22:31:58 by obouizga          #+#    #+#              #
#    Updated: 2022/03/27 14:39:00 by obouizga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

B_NAME = checker

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

CC = cc

FUNCTIONS = apply_move.c basic_sorting.c bubble_sort.c check_duplicate.c check_input.c check_integer.c \
			check_range.c check_sorted_av.c check_sorted_int.c convert_to_array.c display_error.c \
			find_max_index.c find_min_index.c form_stack_a.c ft_putstr.c ft_strcmp.c g_rev_rotate.c \
			g_rotate.c g_swap.c get_back_to_a.c get_index.c get_node_on_top.c get_node.c main_sort.c \
			penta_sorting.c pick_up.c push_chunks.c push_mins.c push_to_a.c push_to_b.c push.c quad_sorting.c \
			re_index.c rev.c reverse_rotate_a.c reverse_rotate_b.c reverse_rotate_both.c rot.c rotate_a.c \
			rotate_b.c rotate_both.c swap_a.c swap_b.c swap_both.c swap.c swp.c tri_sort.c ft_atoi.c \
			ft_lstadd_back.c ft_lstadd_front.c print_list.c ft_lstnew.c ft_lstsize.c not_integer.c ft_isdigit.c  ft_putstr_fd.c\
			get_next_line.c get_next_line_utils.c  free_stack.c check_input_two.c 

OBJECTS = $(FUNCTIONS:.c=.o)

all : $(NAME)

$(NAME) :	$(OBJECTS)
			$(CC) $(CFLAGS) $(OBJECTS) push_swap.c -o $(NAME) 
			@echo "PUSH_SWAP CREATED"



bonus : $(B_NAME)

$(B_NAME) : $(OBJECTS)
			$(CC) $(CFLAGS) $(OBJECTS) checker.c -o $(B_NAME) 
			@echo "CHECKER CREATED"

clean :
			$(RM)	$(OBJECTS)
	
fclean : clean
			$(RM) $(NAME) $(B_NAME)
			@echo "PUSH_SWAP DESTROYED"

re : fclean all bonus