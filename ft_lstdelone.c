/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:38:39 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/14 13:06:45 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list *lst , void (*del)(void *))
{
    del(lst->content);
    free(lst);
    lst = NULL;
}
// void del(void *c)
// {
//     free(c);
//     c = NULL;
// }


