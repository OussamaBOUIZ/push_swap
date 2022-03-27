/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_non_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 09:34:00 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/27 09:34:41 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_integer(char *s)
{
	int	i;

	i = 0;
	if (s[i] != '-' && !ft_isdigit(s[i]))
		return (1);
	while (s[++i])
		if (!ft_isdigit(s[i]))
			return (1);
	return (0);
}
