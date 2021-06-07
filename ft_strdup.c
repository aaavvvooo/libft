/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amidoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:25:29 by amidoyan          #+#    #+#             */
/*   Updated: 2021/01/29 19:52:04 by amidoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*copy;

	size = ft_strlen(s1);
	if (!(copy = (char *)malloc(size + 1)))
		return (NULL);
	ft_memcpy(copy, s1, size);
	copy[size] = '\0';
	return (copy);
}
