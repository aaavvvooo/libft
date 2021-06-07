/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:11 by amidoyan          #+#    #+#             */
/*   Updated: 2021/01/29 19:42:24 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;
	t_list *new_item;

	if (!lst || !f)
		return (NULL);
	if (!(new_item = ft_lstnew((*f)(lst->content))))
	{
		ft_lstclear(&result, del);
		return (NULL);
	}
	result = new_item;
	lst = lst->next;
	while (lst)
	{
		if (!(new_item = ft_lstnew((*f)(lst->content))))
			return (NULL);
		ft_lstadd_back(&result, new_item);
		lst = lst->next;
	}
	return (result);
}
