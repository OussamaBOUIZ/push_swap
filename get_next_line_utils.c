/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:28:49 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/26 22:30:51 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_string_len(const char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

char	*ft_join_string(char *s1, char *s2)
{
	char	*nw_str;
	size_t	total_l;
	int		i;
	int		j;

	total_l = ft_string_len(s1) + ft_string_len(s2);
	nw_str = malloc(sizeof(char) * (total_l + 1));
	if (!nw_str)
		return (NULL);
	i = -1;
	if (s1)
		while (s1[++i])
			nw_str[i] = s1[i];
	j = ft_string_len(s1);
	i = 0;
	if (s2)
		while (s2[i])
			nw_str[j++] = s2[i++];
	nw_str[j] = '\0';
	free(s1);
	return (nw_str);
}

char	*ft_substring(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (len == 0)
		substr = (char *) malloc(sizeof(char) * 1);
	else
	{
		if (!s || !len)
			return (NULL);
		if (start >= ft_string_len(s))
			len = 0;
		else if (len > ft_string_len(s))
			len = ft_string_len(s) - start;
		substr = malloc((len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
		while (s[start] && i < len)
			substr[i++] = s[start++];
	}
	substr[i] = 0;
	return (substr);
}
