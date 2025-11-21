/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relaforg <relaforg@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:17:33 by relaforg          #+#    #+#             */
/*   Updated: 2025/11/11 15:17:05 by relaforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	printf_int(int nbr, char *buf)
{
	size_t	len;
	char	*str;

	str = ft_itoa(nbr);
	if (!str)
		return (0);
	len = ft_strlen(str);
	if (buf)
		ft_memcpy(buf, str, len);
	free(str);
	return (len);
}
