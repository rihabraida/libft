/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:00:36 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/04 22:01:09 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>
static int ft_check( const char *str,char c)
{
    int i;
    i = 0;
    while(str[i]!= '\0')
    {
        if(str[i] == c)
            return 1;
        i++;
    }
    return 0;
}
size_t ft_strlen( const char *str)
{
	size_t	i;
	i =0;
	while(str[i] != '\0')
		i++;
	return i;
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end = ft_strlen(s1) - 1;
    char *str;
    start = 0;
    while(start < end  &&  ft_check(set,s1[start]))
        start++;
    while(end > start && ft_check(set,s1[end]))
        end--;
    str = malloc(end - start + 2);
    if(!str)
        return NULL;
    int i =0;
    printf("%d  %d", start,end);
     while(start <= end)
    {
        str[i] =  s1[start];
        start++;
        i++;
    }
    str[i] = '\0';
    return str ;
}
int main()
{
     char s1[] = "ABDCCCADBC";
    char s2[] = "ABC";
    printf("%s\n", ft_strtrim(s1, s2));
}