/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:57:05 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:25:10 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsiz)
{
	size_t	i;

	if (dstsiz == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsiz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsiz > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
