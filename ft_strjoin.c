/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:10:04 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:25:08 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t_len;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	t_len = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc (t_len + 1);
	if (!s)
		return (NULL);
	*s = '\0';
	ft_strlcpy(s, s1, t_len + 1);
	ft_strlcat(s, s2, t_len + 1);
	return (s);
}
