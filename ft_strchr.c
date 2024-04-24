/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:27:17 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:25:02 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == ch)
		return ((char *)(str + i));
	return (NULL);
}
