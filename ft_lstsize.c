/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:54:35 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/16 11:52:39 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lstsize(t_list *lst)
{
    t_list *p;
    int i;

    p = lst;
    i = 0;
    if(lst == NULL)
        return (0);
    while(p != NULL)
    {
        p = p->next;
        i++;
    }
    return i;
}
// int main()
// {
// t_list node *head;
// t_list *one = NULL;
// t_list node *two = NULL;
// t_list node *three = NULL;

// /* Allocate memory */
// one = malloc(sizeof(t_list));
// two = malloc(sizeof(t_list));
// three = malloc(sizeof(t_list));

// /* Assign data values */
// one->data = 1;
// two->data = 2;
// three->data=3;

// /* Connect nodes */
// one->next = two;
// two->next = three;
// three->next = NULL;

// /* Save address of first node in head */
// head = one;
// printf("%d",ft_lstsize(head));
    
// }