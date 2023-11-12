/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:04:24 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/11 22:35:46 by rraida-          ###   ########.fr       */
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
//      int array [] = { 54, 85, 20, 63, 21 };
//     int * copy = NULL;
//     int length = sizeof( int ) * 5;

//     /* Memory allocation and copy */
//     copy = (int *) malloc( length );
//     memcpy( copy, array,  8);

//     /* Display the copied values */
//     for( length=0; length<5; length++ ) {
//         printf( "%d ", copy[ length ] );
//     }
//     printf( "\n" );

//     free( copy );
// }
