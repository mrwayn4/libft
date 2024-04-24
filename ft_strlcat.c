/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:58:01 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:25:13 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	i = 0;
	while (src[i] != '\0' && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
