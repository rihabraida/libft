/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:43:02 by rraida-           #+#    #+#             */
/*   Updated: 2023/10/31 21:17:16 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int isalnum(int arg)
{
	if( (arg >= 'A' && arg <= 'Z') || ( arg >= 'a' && arg <= 'z'))
		return 1;
	else if (arg >= 0 && arg <= 9)
		return 1;
	else
		return 0;
}
int main()
{
	char h;
	h = 'c';
	printf("%d",isalnum(h));

}
