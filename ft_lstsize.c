/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:41:43 by amidoyan          #+#    #+#             */
/*   Updated: 2021/01/27 20:31:13 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int				size;
	t_list			*l;

	if (!lst)
		return (0);
	l = lst;
	size = 1;
	while (l->next)
	{
		l = l->next;
		size++;
	}
	return (size);
}
