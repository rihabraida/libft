/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:31:39 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 20:10:11 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *c)
// {
//     free(ft_strdup(c));
// }
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

// int main(int arc, char **arv)
// {
// t_list *head;
// t_list *one = NULL;
// t_list  *two = NULL;
// t_list  *three = NULL;

// /* Allocate memory */
// one = malloc(sizeof(t_list));
// two = malloc(sizeof(t_list));
// three = malloc(sizeof(t_list));

// /* Assign data values */
// one->content = arv[0];
// two->content = arv[1];
// three->content = arv[2];

// /* Connect nodes */
// one->next = two;
// two->next = three;
// three->next = NULL;

// head = one;

// ft_lstclear(&head,del);
// printf("%p",head);
// }
