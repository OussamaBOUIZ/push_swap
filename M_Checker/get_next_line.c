/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouizga <obouizga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:27:15 by obouizga          #+#    #+#             */
/*   Updated: 2022/03/22 14:46:57 by obouizga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static char	*before_bn(char *buff)
{
	int		i;

	if (!*buff)
		return (NULL);
	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	return (ft_substring(buff, 0, i + 1));
}

static char	*after_bn(char *buff)
{
	char	*after;
	int		len;
	int		i;

	len = ft_string_len(buff);
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
		{
			after = ft_substring(buff, i + 1, len - i + 1);
			free(buff);
			return (after);
		}
		i++;
	}
	free(buff);
	return (NULL);
}

static int	backslash_n(char *buff)
{
	if (!buff)
		return (0);
	while (*buff)
	{
		if (*buff == '\n')
			return (1);
		buff++;
	}
	return (0);
}

static char	*read_file(int fd, char *red)
{
	int		i;
	char	*buff;

	i = 1;
	buff = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (!backslash_n(red) && i)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[i] = 0;
		red = ft_join_string(red, buff);
	}
	free(buff);
	return (red);
}

char	*get_next_line(int fd)
{
	static char	*red;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	red = read_file(fd, red);
	if (!red)
		return (NULL);
	line = before_bn(red);
	red = after_bn(red);
	return (line);
}