/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relaforg <relaforg@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:57:45 by relaforg          #+#    #+#             */
/*   Updated: 2025/11/14 15:36:23 by relaforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

# define OPEN_MAX 1024

enum	e_errcode
{
	SUCCESS,
	MALLOC_FAIL,
	CONTINUE
};

char	*get_next_line(int fd);

size_t	ft_sstrlen(char *str);
char	*ft_strchr(const char *s, int c);
void	*ft_realloc(void *ptr, size_t ptr_size, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);

#endif
