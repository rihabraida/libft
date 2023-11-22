/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:31:39 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/18 16:45:19 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*q;
	t_list	*p;

	if (!lst || !del)
		return ;
	p = *lst;
	while (p)
	{
		q = p;
		p = p->next;
		ft_lstdelone(q, del);
	}
	*lst = NULL;
}
