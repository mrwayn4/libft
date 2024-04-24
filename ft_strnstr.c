/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:53:41 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:25:22 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*ndl)
		return ((char *)hstk);
	while (i < len && hstk[i])
	{
		j = 0;
		while ((i + j) < len && hstk[i + j] && ndl[j] && hstk[i + j] == ndl[j])
			j++;
		if (ndl[j] == '\0')
			return ((char *)(hstk + i));
		i++;
	}
	return (NULL);
}
