/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:09:54 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/16 13:51:30 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *p;
    
    p = *lst;
    if(!new)
        return ((void)0);  
    if(*lst == NULL)
        *lst = new;
    else
    {
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = new;
    }
}