/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:56:37 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/31 15:29:46 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char	*s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char	*a, char x)
{
	size_t	i;

	if (!a)
		return (0);
	i = 0;
	while (a[i])
	{
		if (a[i] == x)
			return (a + i);
		i++;
	}
	if (x == 0)
		return (a + i);
	return (0);
}

char	*jjoin(char	**holder, char	*buf, int fd)
{
	size_t	holdlen;
	size_t	buflen;
	size_t	i;
	size_t	j;
	char	*line;

	holdlen = ft_strlen(holder[fd]);
	buflen = ft_strlen(buf);
	line = (char *)malloc(holdlen + buflen + 1);
	if (!line)
	{
		free(holder[fd]);
		return (0);
	}
	i = -1;
	while (++i < holdlen)
		line[i] = holder[fd][i];
	j = -1;
	while (++j < buflen)
		line[i + j] = buf[j];
	line[i + j] = '\0';
	free(holder[fd]);
	return (line);
}

char	*oold(char	**holder, size_t	*pos, int fd)
{
	size_t	i;
	char	*line;

	i = *pos;
	while (holder[fd][i] && holder[fd][i] != 10)
		i++;
	line = (char *)malloc(i + 2);
	if (!line)
	{
		free(holder[fd]);
		holder[fd] = 0;
		return (0);
	}
	i = -1;
	while (holder[fd][++i] && holder[fd][i] != 10)
		line[i] = holder[fd][i];
	if (holder[fd][i] == 10)
	{
		line[i] = holder[fd][i];
		i++;
	}
	line[i] = '\0';
	*pos = i;
	return (line);
}

char	*nnew(char	**holder, size_t	*pos, int fd)
{
	size_t	i;
	size_t	j;
	char	*nline;

	i = *pos;
	if (!holder[fd][i])
	{
		free(holder[fd]);
		return (0);
	}
	nline = (char *)malloc(ft_strlen(holder[fd]) - i + 1);
	if (!nline)
	{
		free(holder[fd]);
		return (0);
	}
	j = -1;
	while (++j + i < ft_strlen(holder[fd]))
		nline[j] = holder[fd][i + j];
	nline[j] = '\0';
	free(holder[fd]);
	holder[fd] = 0;
	return (nline);
}
