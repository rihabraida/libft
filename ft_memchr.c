/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:50:48 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/02 19:15:18 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
void	*ft_memchr(const void *str, int sh, size_t size)
{
		size_t i;
		unsigned char *fd;

		if (!str )
			return NULL;
		fd = (unsigned char *)str;
		i = 0;
		while(fd[i] !='\0' && i < size)
			{
				if( fd[i] ==(unsigned char) sh)
					return (void *)(fd + i);
				i++;
			}
		return NULL;
}
int main()
{
	const char str []= "he.llo";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, 5);

  printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}

		
