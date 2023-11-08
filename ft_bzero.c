/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:07:07 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/01 12:51:10 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>
void	ft_bzero(void *dest, size_t n)
{
	int i;
	i = 0;
	unsigned char *dt;
	dt = dest;
	while(n)
	{
		dt[i] = 0;
		i++;
		n--;
	}
}
int main()
{
	int dest[80]={1,2,3,4};
	ft_bzero(dest, 5);
	printf("%i %i",dest[0] ,dest[1]);
}

