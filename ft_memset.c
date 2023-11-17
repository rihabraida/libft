/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:54:32 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/16 23:11:24 by rraida-          ###   ########.fr       */
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
// int main()
// {
// 	int set[] ={1,3,8,6};
// 	int s2 = NULL;
// 	int *p = ft_memset(s2,2,5);
//   		printf(" %d %d  %d" ,p[0], p[1],p[2]);
// }
