/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 10:47:16 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/30 13:17:08 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strchr(char	*a, char x);
char	*rread(int fd, char	**holder);
size_t	ft_strlen(char	*s);
char	*jjoin(char	**holder, char	*buf);
char	*oold(char	**holder, size_t	*pos);
char	*extract(char	**holder, char	**old_holder);
char	*nnew(char	**holder, size_t	*pos);

#endif
