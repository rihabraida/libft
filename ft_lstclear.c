/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:31:39 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/16 16:25:50 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void    ft_lstclear(t_list **lst,void (*del)(void*))
{
    t_list *q;
    t_list *p;
    
    p = *lst;
    if(p && del)
    {
        while(p)
        {
            q = p;
            del(q->content);
            free(q);
            p = p->next;
        }
    }
    *lst = NULL;
}
