/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:58:16 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/16 12:23:30 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst,void (*f) (void *))
{
    t_list *p;
    p = lst;
    // if(lst == NULL)
    //     return (0);
    while(p != NULL)
    {
        f(p->content);
        p = p->next; 
    }
}
