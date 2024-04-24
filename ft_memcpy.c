/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:49:36 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/28 16:13:43 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*sour;
	size_t				i;

	i = 0;
	dest = (unsigned char *) dst;
	sour = (const unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return ((void *)src);
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dest);
}
