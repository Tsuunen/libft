/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relaforg <relaforg@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:02:26 by relaforg          #+#    #+#             */
/*   Updated: 2025/11/05 16:09:01 by relaforg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	(void) del;

	new = NULL;
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new);
}
