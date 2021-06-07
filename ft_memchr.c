/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:19:12 by amidoyan          #+#    #+#             */
/*   Updated: 2021/02/02 14:29:23 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	i = 0;
	new = (unsigned char*)s;
	while (i < n)
	{
		if (new[i] == (unsigned char)c)
			return ((void*)s + i);
		++i;
	}
	return (NULL);
}
