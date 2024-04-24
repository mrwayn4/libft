/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:14:32 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:24:45 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*s;
	unsigned char		*dest;
	size_t				i;

	dest = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (s > dest)
	{
		i = 0;
		while (i < len)
		{
			dest[i] = s[i];
			i++;
		}
	}
	if (s < dest)
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
