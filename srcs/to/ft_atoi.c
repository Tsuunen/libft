/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relaforg <relaforg@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:48:07 by relaforg          #+#    #+#             */
/*   Updated: 2025/11/05 15:00:41 by relaforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int			sign;
	long int	out;

	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	out = 0;
	while (ft_isdigit(*nptr))
	{
		out = out * 10 + (*nptr - '0');
		if ((sign == 1 && out > 2147483647) || (sign == -1 && out > 2147483648))
			return (0);
		nptr++;
	}
	return ((int)(out * sign));
}
