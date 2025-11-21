/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_xint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relaforg <relaforg@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:04:46 by relaforg          #+#    #+#             */
/*   Updated: 2025/11/08 10:53:54 by relaforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/ft_printf.h"

int	printf_xint(int nbr, char *buf)
{
	size_t	len;
	char	*str;

	str = ft_utoa_base((unsigned) nbr, LOW_HEX);
	if (!str)
		return (0);
	len = ft_strlen(str);
	if (buf)
		ft_memcpy(buf, str, len);
	free(str);
	return (len);
}
