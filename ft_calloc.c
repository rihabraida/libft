/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:01:20 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/20 12:03:11 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*tab;
	size_t		i;

	i = count * size;
	if (count != 0 && (i / count) != size)
		return (NULL);
	tab = malloc(i);
	if (!tab)
		return (NULL);
	ft_bzero(tab, i);
	return (tab);
}
