/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:22:30 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:24:38 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*p;
	size_t				i;
	unsigned char		v;

	v = (unsigned char) value;
	p = (const unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		if (p[i] == v)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
