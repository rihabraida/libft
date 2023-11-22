/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:46:41 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/16 11:52:53 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;
	t_list	*q;

	p = lst;
	if (lst == NULL)
		return (NULL);
	while (p != NULL)
	{
		q = p;
		p = p->next;
	}
	return (q);
}
