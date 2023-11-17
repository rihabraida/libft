/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:03:38 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 20:04:29 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;
	t_list	*head;
	void	*v;

	head = NULL;
	if (del && f)
	{
		while (lst)
		{
			v = f(lst->content);
			t = (t_list *)malloc(sizeof(t_list));
			if (!t)
			{
				ft_lstclear(&head, del);
				free(v);
				return (NULL);
			}
			t->content = v;
			t->next = NULL;
			ft_lstadd_back(&head, t);
			lst = lst->next;
		}
	}
	return (head);
}
// static void* f(void *v)
// {
// 	char *t;
// 	t = (char *)v;
// 	*t = *t + 1;
// 	return v; 
// }
// static void del(void *c)
// {
//     free(ft_strdup(c));
// }
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
// tmp = ft_lstmap(head,f,del);
// while(tmp)
// {
// 	printf("%s",(char *)tmp->content);
// 	tmp = tmp->next;
// }
// }