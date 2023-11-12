/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:54:39 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/11 21:43:41 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (count);
}

static int	*ft_allocate(const char *s, char c, int count, int *tab)
{
	int	i;
	int	j;

	j = 0;
	while (j < count)
	{
		i = 0;
		while (*s && *s == c)
			s++;
		while (*s != c && *s)
		{
			i++;
			s++;
		}
		// while (*s && *s == c)
		// 	s++;
		tab[j] = i;
		j++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	int		*lg;
	char	**tab;

	i = 0;
	count = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	lg = (int *)malloc(sizeof(int) * count);
	if (!lg)
		return (NULL);
	ft_allocate(s, c, count,lg);
	while (i < count)
	{
		tab[i] = (char *)malloc(sizeof(char) * (lg[i] + 1));
		if (!tab[i])
        {
            while (i > 0)
            {
                free(tab[i - 1]);
                i--;
            }
            free(tab); // Freeing the tab itself
            free(lg);
            return (NULL);
        }
		i++;
	}
	tab[count] = NULL;
	while (*s && *s == c)
		s++;
	i = 0;
	while (i < count)
	{
		ft_strlcpy(tab[i], s, lg[i] + 1);
		s = s + lg[i];
		while (*s && *s == c)
			s++;
		i++;
	}
	return (tab);
}
// int main()
//     {
//         char str[] = '';
//         char **tab = NULL;
//         int i = 0;
//         int j = 0;
//         int *lg;
//         lg = ft_allocate(str,'/',4);
//         printf("%d %d %d %d \n",lg[0], lg[1], lg[2], lg[3]);
//         tab =ft_split(str ,'/');
//         while(tab[j])
//         {
//             i  = 0;
//             while(tab[j][i])
//             {
//                   printf("%c",tab[j][i]);
//                   i++;
//             }
//             printf("\n");
//             j++;
//         }
//     }
