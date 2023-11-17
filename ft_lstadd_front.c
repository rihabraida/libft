/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:52:57 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 19:44:25 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
// int main(int arc, char **arv)
// {
// t_list *head = NULL;
// t_list *new;
// int i;

// i = 1;
// while(i < arc)
// {
// 	new = ft_lstnew(arv[i]);
// 	ft_lstadd_front(&head, new);
// 	i++;
// }
// while(head)
// {
// 	printf("%s",(char *)head->content);
// 	head = head->next;

// }
// }
