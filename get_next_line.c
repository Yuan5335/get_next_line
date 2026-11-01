/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:47:11 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/31 17:04:03 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract(char	**holder, char	**old_holder)
{
	size_t	i;

	i = 0;
	*old_holder = oold(holder, &i);
	if (!*old_holder)
		return (0);
	*holder = nnew(holder, &i);
	return (*old_holder);
}

char	*rread(int fd, char	**holder)
{
	ssize_t	i;
	char	buf[BUFFER_SIZE + 1];

	i = 1;
	while (i > 0 && !ft_strchr(*holder, 10))
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i < 0)
		{
			free(*holder);
			*holder = 0;
			return (0);
		}
		buf[i] = '\0';
		*holder = jjoin(holder, buf);
	}
	return (*holder);
}

char	*get_next_line(int fd)
{
	static char	*holder;
	char		*old_holder;

	if (BUFFER_SIZE < 0 || fd < 0)
		return (0);
	holder = rread(fd, &holder);
	if (!*holder)
	{
		free(holder);
		holder = 0;
		return (0);
	}
	old_holder = extract(&holder, &old_holder);
	return (old_holder);
}
