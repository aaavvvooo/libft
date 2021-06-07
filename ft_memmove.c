/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:15:46 by amidoyan          #+#    #+#             */
/*   Updated: 2021/01/29 14:31:17 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	s1 = (char *)dest;
	s2 = (char *)src;
	i = 0;
	if (s1 > s2)
	{
		while (n-- > 0)
		{
			s1[n] = s2[n];
		}
	}
	else
	{
		while (i < n)
		{
			s1[i] = s2[i];
			++i;
		}
	}
	return (dest);
}
