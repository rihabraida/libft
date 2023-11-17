/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:42:11 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/11 21:37:00 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	y;

	i = 0;
	x = ft_strlen(src);
	if (size == 0 || size <= ft_strlen(dest))
	{
		return (size + x);
	}
	y = ft_strlen(dest);
	j = y;
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (x + y);
}
// int main() {
//     char *destination = NULL;
//     const char* source = "jhkjbhh";

//     size_t result = ft_strlcat(destination, source, 0);

//     printf("Concatenated: %s\n", destination);
//     printf("Total length: %zu\n", result);

//     return (0);
// }