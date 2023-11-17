/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:29:10 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/12 17:47:23 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n && ss1[i] != '\0' && ss2[i] != '\0' && ss1[i] == ss2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (ss1[i] - ss2[i]);
}
// int main()
// {
// 	char s2[] ="";
// 	char *s1 ;
// 	printf("%d  ",strncmp(s1,s2,4));
// 	printf("%d ",ft_strncmp(s1,s2,8));

// }
