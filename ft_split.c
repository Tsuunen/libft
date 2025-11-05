/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relaforg <relaforg@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:25:45 by relaforg          #+#    #+#             */
/*   Updated: 2025/11/05 15:06:55 by relaforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *tmp, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (*tmp)
		nb++;
	while (*(tmp + i))
	{
		if (*(tmp + i) == c)
			*(tmp + i) = 0;
		else if (i > 0 && *(tmp + i) && !*(tmp + i - 1))
			nb++;
		i++;
	}
	return (nb);
}

static void	fill_out(int nb, char **out, int i, char *tmp)
{
	out[nb] = NULL;
	while (nb-- > 0)
	{
		while (!*(tmp + i))
			i--;
		while (i >= 0 && *(tmp + i))
			i--;
		out[nb] = ft_strdup(tmp + i + 1);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	char	*tmp;
	int		i;
	int		nb;

	tmp = ft_strtrim(s, (char []){c, '\0'});
	if (!tmp)
		return (NULL);
	i = ft_strlen(tmp);
	nb = ft_count_words(tmp, c);
	out = ft_calloc(nb + 1, sizeof(*out));
	if (!out)
	{
		free(tmp);
		return (NULL);
	}
	fill_out(nb, out, i, tmp);
	free(tmp);
	return (out);
}
