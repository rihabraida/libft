/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:47:16 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/02 18:18:12 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <string.h>
char *ft_strrchr(const char *str,int ch)
{

    int i;
    i = 0;
	
	while(str[i] != '\0')
	     i++;
	if(ch == '\0')
		return (char *)&str[i];
	i--;
	while(str[i]!= '\0')
	{
		if(str[i] == (char)ch)
		{
		   return (char *)&str[i];
		}
		i--;
	}
	return 0;
}
int main()
{
    char str[]="hehlo\0ohl\0jyu";
    char l = '\0';
    char * result = strrchr(str,l);
    printf("%s  \n %ld",result, result - str);

    return 0;
}

