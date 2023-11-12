/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:47:16 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/12 13:17:42 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if ((char)ch == '\0')
		return ((char *)&str[i]);
	i--;
	while (i >= 0)
	{
		if (str[i] == (char)ch)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (0);
}
// int main()
// {
//     char *str = "ksjljdj";
//     char l = '\0';
//     char * result = ft_strrchr(str,l);
//     printf("%s  \n %ld",result, result - str);

//     return (0);
// }
