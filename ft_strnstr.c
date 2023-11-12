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

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	lg;
	size_t	i;
	size_t	j;

	lg = ft_strlen(sub);
	i = 0;
	if (lg == 0)
		return ((char *)str);
	if (len < lg)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (sub[j] != '\0' && str[i + j] == sub[j] && i + j < len)
			j++;
		if (sub[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char str[]="hello";
//     char sub[]="ell";
//     printf("%s",ft_strnstr(str,sub,3));
// }
