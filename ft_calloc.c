/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:01:20 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/03 22:01:35 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_calloc(size_t  count , size_t size)
{
    void *tab;
    tab = malloc( count * size);
    if (!p)
        return NULL;
    ft_bzero(tab,count * size);
    return (tab);
}