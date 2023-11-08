/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:11:06 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/02 15:05:53 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
void * ft_memmove( void * dst, const void * src, size_t size )
{
	size_t i;
	char *d = (char *)dst;
	char *s = (char *)src; 
	
	i = 0;

	if(!d && !s)
		return NULL;
	if(d  > s)
	{
		while (i < size)
		{
			d[size - i - 1] = s[size - i - 1];
			i++;
		}
	}
	
	else
	{
	while(i < size)
	{
		d[i] = s[i];
		i++;
	}
	}
	return dst;
}
int main()
{
	 char sdest[15];
	char csrc[] = "abcjdef"; 
   
    //ft_memmove(sdest, csrc, 3);  
    printf("%p %p", sdest,csrc);
	//printf("%i %i %i %i %i ",src[0], src[1] , src[2], src[3], src[4]);
}


