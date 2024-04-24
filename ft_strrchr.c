/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:59:38 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:25:24 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	int		len;
	int		i;

	ch = (char)c;
	len = ft_strlen(str);
	i = len - 1;
	if (ch == '\0')
		return ((char *)(str + len));
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
