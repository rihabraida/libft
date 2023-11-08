/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:39:29 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/04 18:39:31 by rraida-          ###   ########.fr       */
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
char    *ft_strjoin(char const *s1,char const *s2)
{
    char *res;
    size_t i;
    size_t j;
    size_t lg1 = ft_strlen(s1);
    size_t lg2 = ft_strlen(s2);
    size_t lg_total = lg1 + lg2 + 1;

    j = 0;
    i = 0;
    res = (char *)malloc(lg_total);
    if(!res)
        return NULL;
    while(s1[j]!= '\0')
    {
        res[i] = s1[j];
        i++;
        j++;
    }
    j = 0;
    while(s2[j] != '\0')
    {
        res[i] =  s2[j];
        i++;
        j++;
    }
    res[i] = '\0';
    return res;
}
int main()
{
    char s1[]="hello";
    char s2[]= "xjfjfn";
    printf("%s", ft_strjoin(s1, s2));
}