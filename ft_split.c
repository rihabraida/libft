/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:54:39 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/05 18:54:42 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include<stdio.h>
static int count_words(char const *str ,char c)
{
    int count;
    int i;
    i = 0;
    count = 0;
    while(str[i] != '\0')
    {
        while(str[i]!= '\0' && str[i] == c)
            i++;
        if(str[i] != '\0')
            count++;
        while(str[i] != '\0' && str[i] != c)
            i++;
    }
    return count;
}
int *ft_allocate(const char  *s , char c, int count)
{
    int i;
    int j;
    int *tab ;
    tab = (int *)malloc(sizeof(int) * count);
    i = 0;
    j = 0;
    while(*s && *s == c)
             s++;
    while(j < count )
    {
        i = 0;
        
        while(*s != c && *s)
        {
            i++;
            s++;
        }
        while(*s && *s == c)
             s++;
        tab[j] = i;
        j++;
    }
    
    return tab;
}  
size_t    ft_strlcpy(char *dest, const char *src, size_t  size)
{
    size_t    i;
    size_t    j;

    i = 0;
    j = 0;
    while (src[j] != '\0')
    {
        j++;
    }
    if (size != 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (j);
}
char    **ft_split(char const *s,char c)
{
    int count;
    int i;
    int *lg;
    i = 0;
    count = count_words(s,c);
    char **tab =(char **) malloc(sizeof(char *) * (count + 1));
    lg = ft_allocate(s,c,count);
   
    while(i < count)
    {
        tab[i]= (char *)malloc(sizeof(char)* (lg[i] + 1));
        i++;
    }
    tab[count] = NULL;
    while(*s && *s == c)
             s++;
    i =0;
    while(i < count)
    {
        ft_strlcpy(tab[i],s,lg[i] + 1);
        
        s = s + lg[i];
        while(*s && *s == c)
             s++;
        i++;
    }
    return (tab);
}
int main()
    {
        char str[] = '';
        char **tab = NULL;
        int i = 0;
        int j = 0;
        int *lg;
        lg = ft_allocate(str,'/',4);
        printf("%d %d %d %d \n",lg[0], lg[1], lg[2], lg[3]);
        tab =ft_split(str ,'/');
        while(tab[j])
        {
            i  = 0;
            while(tab[j][i])
            {
                  printf("%c",tab[j][i]);
                  i++;
            }
            printf("\n");
            j++;
        }
    }