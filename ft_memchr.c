/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:50:48 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/18 18:09:27 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int sh, size_t size)
{
	size_t				i;
	unsigned char		*fd;

	fd = (unsigned char *)str;
	i = 0;
	while (i < size)
	{
		if (fd[i] == (unsigned char)sh)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
