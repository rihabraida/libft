/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:09:54 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 22:13:44 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = *lst;
	if(!lst || !new)
		return ;
	if (*lst == NULL)
	{	
		*lst = new;
		return ;
	}
	else
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new;
	}
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
// 	ft_lstadd_back(&head, new);
// 	i++;
// }
// t_list *tmp;
// tmp = head;
// while(head)
// {

// 	printf("%s",(char *)head->content);
// 	head = head->next;

// }
// printf("%d",ft_lstsize(tmp));
// }
