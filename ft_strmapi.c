/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:38:43 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/07 14:38:45 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>
size_t ft_strlen( const char *str)
{
	size_t	i;
	i =0;
	while(str[i] != '\0')
		i++;
	return i;
}

char    *ft_strmapi(char const *s,char (*f)(unsigned int, char))
{
    char *tab;
    int i;
    i = 0;
    if(!s)
        return  NULL;
    tab = malloc(sizeof(char) * ft_strlen(s) + 1);
    if(!tab)
        return NULL;
    while(s[i] != '\0')
    {
        tab[i] = f(i ,s[i]); 
        i++;
    }
    tab[i]='\0';
    return tab;
}
char f(unsigned int i, char c)
{
	char str;
	str = c + i;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}