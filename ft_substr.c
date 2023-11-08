/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:30:13 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/04 17:37:21 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
size_t ft_strlen( const char *str)
{
	size_t	i;
	i =0;
	while(str[i] != '\0')
		i++;
	return i;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;
	
	i = 0;
	sub = (char *)malloc(len + 1);
	if(!sub)
		return NULL;
	while(i < len && s[start + i ] != '\0')
	{
		sub[i] = s[start + i ];
		i++;
	}
	sub[i] = '\0';
	return sub;
}
int main()
{
	char s[]= "bonjour";
	printf("%s", ft_substr(s,2,7));
}

