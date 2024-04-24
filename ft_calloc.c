/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:00:13 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/30 15:42:37 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if ((int)count < 0 || (int)size < 0)
		return (NULL);
	s = (void *)malloc(count * size);
	if (s == NULL)
		return (NULL);
	ft_bzero (s, count * size);
	return (s);
}
