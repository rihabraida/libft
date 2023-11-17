/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:44 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 19:42:52 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str++;
	}
	if ((char)ch == *str)
		return ((char *)str);
	return (NULL);
}
// int	main(void)
// {
// 	char *str = "fkrmmf";
// 	char l = 'a';
// 	char *result = ft_strchr(str, l);
// 	printf("%s  \n ", result);

// 	return (0);
// }