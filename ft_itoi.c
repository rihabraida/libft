/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:53:24 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/06 18:54:40 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<stdlib.h>
// char     *ft_itoa(int n)
// {
//     char *tab;
//     int i ;
//     long nb;
//     int j;
//     nb = n;
//     i = 0;
   
//     while(n > 0)
//     {
//         n/= 10;
//         i++;
//     }
//      if(n < 0)
//     {
//         i++;
//         nb = -nb;
//     }
//     tab = malloc(sizeof(char) * (i + 1));
//     if(!tab)
//         return NULL;
//     if(n < 0)
//         tab[0] = '-';
//     j  = i - 1 ;
//     tab[j + 1] = '\0';
//     while(n > 0)
//     {
//         tab[j] = n % 10 + 48;
//         n /= 10;
//         j--;
//     }
//     return tab;
// }
// int main()
// {
//     printf("%s", ft_itoa(293));
    
// }
#include <stdio.h>
#include <stdlib.h>
int	len_int(int c)
{
	int i;
	i = 1;
	while(c / 10)
	{
		c = c / 10;
		i++;	
	}
	return i;
}
char *ft_itoa(int nbr)
{
	char *p;
	int c;
	long n;
	n = nbr;
	c = len_int(nbr);
	if( nbr < 0)
	{
	  c++;
  	  n = -n;
	}
	p = malloc(sizeof(char) * (c + 1));
	if(!p)
		return NULL;
	if (nbr < 0)
	{
		p[0] = '-';
	}
	p[c] = '\0';
	c = c - 1;
	while(n > 0) 
		{
			p[c]= n % 10 + 48;
			n = n / 10;
			c--;
		}
	return (p);
}
int main()
{
	char *c;
	c = ft_itoa(0123);
	printf("%s",c);
}
