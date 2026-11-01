/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:56:18 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/31 15:13:58 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strchr(char	*a, char x);
char	*rread(int fd, char	**holder);
size_t	ft_strlen(char	*s);
char	*jjoin(char	**holder, char	*buf, int fd);
char	*oold(char	**holder, size_t	*pos, int fd);
char	*extract(char	**holder, char	**old_holder, int fd);
char	*nnew(char	**holder, size_t	*pos, int fd);

#endif
