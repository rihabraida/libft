/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:11:57 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/02 17:19:44 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
int ft_toupper(int ch)
{
	if( ch >= 97 && ch <= 122)
		ch = ch - 32;
	return ch;
}
int main()
{
	int c;
	c = -1;
    printf("%i -> %i", c, toupper(c));
	printf("%i -> %i", c, ft_toupper(c));
}


