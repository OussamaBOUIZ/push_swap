/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:47:23 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/14 12:48:50 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_arr(int *arr, int n)
{
	int i;

	i = -1;
	while (++i < n)
		printf("[%i]\n", arr[i]);
}
