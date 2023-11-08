/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:23:35 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/03 21:29:58 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include<string.h>
size_t ft_strlen( const char *str)
{
	size_t	i;
	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}
char *ft_strnstr(const char *str, const char *sub, size_t len )
{
    
    size_t lg = ft_strlen(sub);
    size_t i;
    size_t j;
    i = 0;
    
    if(lg == 0)
        return (char *)str;
    if(len < lg)
        return NULL;
    while( str[i] != '\0' && i  < len )
    {
        j = 0;
        while(sub[j] != '\0' && str[i + j] == sub[j]  && i + j < len )  
            j++;
        if(sub[j] == '\0')
            return (char *)str + i;
        i++;
    }
    return  NULL;
}
int main()
{
    char str[]="hello";
    char sub[]="ell";
    printf("%s",ft_strnstr(str,sub,3));
}
