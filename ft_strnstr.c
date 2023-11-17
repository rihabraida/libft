/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:23:35 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 21:52:46 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	lg;
	size_t	i;
	size_t	j;

	if(!str && sub &&len == 0)
		return(NULL);
	lg = ft_strlen(sub);
	i = 0;
	if (lg == 0)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (sub[j] != '\0' && str[i + j] == sub[j] && i + j < len)
			j++;
		if (sub[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}
// int main()
// {
//     char *str=NULL;
//     char *sub = NULL;
//     printf("%s",strnstr(str ,sub , 0));
// }

