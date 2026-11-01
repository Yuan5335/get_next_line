/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:55:57 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/31 17:04:27 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*extract(char	**holder, char	**old_holder, int fd)
{
	size_t	i;

	i = 0;
	*old_holder = oold(holder, &i, fd);
	if (!*old_holder)
		return (0);
	holder[fd] = nnew(holder, &i, fd);
	return (*old_holder);
}

char	*rread(int fd, char	**holder)
{
	ssize_t	i;
	char	buf[BUFFER_SIZE + 1];

	i = 1;
	while (i > 0 && !ft_strchr(holder[fd], 10))
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i < 0)
		{
			free(holder[fd]);
			holder[fd] = 0;
			return (0);
		}
		buf[i] = '\0';
		holder[fd] = jjoin(holder, buf, fd);
	}
	return (holder[fd]);
}

char	*get_next_line(int fd)
{
	static char	*holder[1024];
	char		*old_holder;

	if (BUFFER_SIZE < 0 || fd < 0)
		return (0);
	holder[fd] = rread(fd, holder);
	if (!*holder[fd])
	{
		free(holder[fd]);
		holder[fd] = 0;
		return (0);
	}
	old_holder = extract(holder, &old_holder, fd);
	return (old_holder);
}
