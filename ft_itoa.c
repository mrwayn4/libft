/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:53:18 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/26 11:24:22 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n = -n;
		count = 1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_copy(char *s, unsigned int len, unsigned int n)
{
	unsigned int	i;

	i = len;
	while (len-- && n > 0)
	{
		s[len] = (n % 10) + 48;
		n = n / 10;
	}
	s[i] = '\0';
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	len;

	len = ft_length(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
	}
	else
	{
		if (n < 0)
		{
			s[0] = '-';
			n = -n;
		}
		ft_copy(s, len, n);
	}
	return (s);
}
