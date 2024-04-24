/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:21:22 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:24:47 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
