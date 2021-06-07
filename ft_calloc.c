/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:24:24 by amidoyan          #+#    #+#             */
/*   Updated: 2021/01/27 19:50:38 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void		*ar;
	size_t		ar_size;

	ar_size = count * size;
	if (!(ar = (void *)malloc(ar_size)))
		return (NULL);
	ft_memset(ar, 0, ar_size);
	return (ar);
}
