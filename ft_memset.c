/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:54:32 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/18 16:20:28 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*q;
	size_t			i;

	i = 0;
	q = (unsigned char *)dest;
	while (i < count)
	{
		q[i] = (unsigned char)ch;
		i++;
	}
	return (dest);
}
