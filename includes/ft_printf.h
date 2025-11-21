/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relaforg <relaforg@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:15:03 by relaforg          #+#    #+#             */
/*   Updated: 2025/11/11 15:31:09 by relaforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

# define LOW_HEX "0123456789abcdef"
# define UP_HEX "0123456789ABCDEF"

int	ft_printf(const char *fmt, ...)
	__attribute__((format(printf, 1, 2)));

int	printf_char(int c, char *buf);
int	printf_string(char *str, char *buf);
int	printf_int(int nbr, char *buf);
int	printf_uint(unsigned int nbr, char *buf);
int	printf_xint(int nbr, char *buf);
int	printf_xint_up(int nbr, char *buf);
int	printf_pointer(void *ptr, char *buf);
int	printf_percent(char *buf);
#endif
