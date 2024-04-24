/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:53:27 by ibouram           #+#    #+#             */
/*   Updated: 2023/11/28 13:25:16 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*x;

	if (!lst || !del)
		return ;
	x = *lst;
	while (*lst)
	{
		x = x -> next;
		ft_lstdelone(*lst, del);
		*lst = x;
	}
}
