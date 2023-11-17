/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:04:24 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/16 23:27:31 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;
	size_t				i;

	cdest = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (n)
	{
		cdest[i] = csrc[i];
		i++;
		n--;
	}
	return (dst);
}
// int main()
// {
// 	char *csrc = NULL;
// 	char *s = NULL;

//   	memcpy(s, csrc, 3);
//     printf("%s ", s);
// 	//printf("%i %i %i %i %i ",src[0], src[1] , src[2], src[3], src[4]);
// }
