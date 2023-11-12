/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:11:06 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/11 16:02:17 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (i < size)
		{
			d[size - i - 1] = s[size - i - 1];
			i++;
		}
	}
	else
	{
		ft_memcpy(dst, src, size);
	}
	return (dst);
}
// int main()
// {
// 	char csrc[] = "oolkj";
// 	char sdest[] ="fghgvhvh";

//     char *p =memmove(sdest, csrc, 3);
//     printf("%s ", p);
// 	//printf("%i %i %i %i %i ",src[0], src[1] , src[2], src[3], src[4]);
// }
