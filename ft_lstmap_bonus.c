/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:03:38 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/20 10:51:42 by rraida-          ###   ########.fr       */
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
// void del(void * c)
// {
// 	c = c + 1;
// }
// void *f(void * c)
// {
// }
// int main(int c, char **v)
// {
// 	// t_list *tt;
// 	// t_list *head = malloc(sizeof(t_list));
// 	// t_list *tmp = malloc(sizeof(t_list));
// 	// t_list *node = malloc(sizeof(t_list));
// 	// int t[]= {1,4,5};
// 	// tt = head;
// 	// head->next = tmp;
// 	// tmp->next = node;
// 	// node->next = NULL;
// 	// head->content =v[1];
// 	// tmp->content = v[2];
// 	// node->content =v[3]; 
// 	// t_list *one = ft_lstmap(tt,&f,&del);
// 	t_list *tmp;
// 	int i = 0;
// 	t_list *head = NULL;
// 	while(c)
// 	{
// 		tmp = ft_lstnew(&v[i]);
// 		ft_lstadd_back(&head,tmp);
// 		i++;
// 		c--;
// 	}
// 	t_list *one = head;
// 	while(one)
// 	{
// 		printf("%c \n",(char )one->content);
// 		one=one->next;
// 	}
// }