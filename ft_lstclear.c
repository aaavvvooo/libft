/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:52:35 by amidoyan          #+#    #+#             */
/*   Updated: 2021/01/29 19:39:50 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *entry;

	entry = *lst;
	while (entry)
	{
		tmp = entry->next;
		del(entry->content);
		free(entry);
		entry = tmp;
	}
	*lst = NULL;
}
