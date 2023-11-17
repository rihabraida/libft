/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:00:36 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 21:16:10 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	if (!s1)
		return (NULL);
	
	end = ft_strlen(s1) - 1;
	start = 0;
	while (start <= end && ft_check(set, s1[start]))
		start++;
	while (end > start && ft_check(set, s1[end]))
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	i = 0;
	ft_strlcpy(str, s1 + start, end - start + 2);
	return (str);
}
// int main()
// {
//      char s1[] = "ABDCCCADBC";
//     char s2[] = "ABC";
//     printf("%s\n", ft_strtrim(s1, s2));
// }