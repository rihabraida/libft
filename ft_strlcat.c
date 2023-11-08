/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:42:11 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/02 12:13:40 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	y;

	i = 0;
	x = ft_strlen((char*)src);
	y = ft_strlen(dest);
	j = y;
	if (size =< y || size == 0)
	{
		return (size + x);
	}
	while (src[i] != '\0' && j < (size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (x + y);
}
int main() {
    char destination[] = "Hello";
    const char* source = "World!";
    
    size_t result = ft_strlcat(destination, source, 4);
    
    printf("Concatenated: %s\n", destination);
    printf("Total length: %zu\n", result);
    
    return 0;
}