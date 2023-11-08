/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:29:10 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/02 18:31:41 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>
int	ft_strncmp(const char *s1,const char *s2, size_t  n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
int main()
{
	char s1[] ="hella";
	char s2[] = "hela";
	printf("%d  ",strncmp(s1,s2,4));
	printf("%d ",ft_strncmp(s1,s2,4));


}
