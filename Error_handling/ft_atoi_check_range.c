/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check_range.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:13:58 by obouizga          #+#    #+#             */
/*   Updated: 2022/02/25 15:34:36 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	num;
	int					sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		num = num * 10 + str[i] - '0';
		if (num >= 2147483648)
			exit (1);
		i++;
	}
	return (num * sign);
}

int	check_range(char **nums, int n)
{
	int	i;

	i = 0;
	while (++i < n)
		ft_atoi(nums[i]);
}
