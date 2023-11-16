/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:54:39 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/15 12:45:05 by rraida-          ###   ########.fr       */
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
static char **ft_free(char **tab ,int count)
{
	while(count >= 0)
	{
		free(tab[count]);
		count--;		
	}
    free(tab);
	return(0);
}
static char *ft_cpy_wrd(char const *s, char *tab,int i, int lg)
{
	int j;
	
	j = 0;
	while(lg > 0)
	{
		tab[j] = s[i - lg];
		lg--;
		j++;
	}
	tab[j] = '\0';
	return(tab);
}
static char	**count_lenght(char const *s,char c, char **tab,int count)
{
	int lg;
	int i;
	int w;
	
	i = 0;
	lg = 0;
	w = 0;
	while (w < count)
	{
		lg =0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
			{
				lg++;
				i++;
			}
		tab[w] = malloc(lg + 1);
		if(!tab[w])
			return(ft_free(tab,w));
		ft_cpy_wrd(s,tab[w],i,lg);
		w++;
	}
	tab[w]= NULL;
	return(tab);
}
char	**ft_split(char const *s, char c)
{
	int 	count;
	char	**tab;
	
	if(!s)
		return (0);
	count = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
    tab = count_lenght(s,c,tab,count);
	return(tab);
}


	
	
	// int		count;
	// int		i;
	// int		*lg;
	// char	**tab;

	// i = 0;
	// count = count_words(s, c);
	// tab = (char **)malloc(sizeof(char *) * (count + 1));
	// if (!tab)
	// 	return (NULL);
	// lg = (int *)malloc(sizeof(int) * count);
	// if (!lg)
	// 	return (NULL);
	// ft_allocate(s, c, count,lg);
	// while (i < count)
	// {
	// 	tab[i] = (char *)malloc(sizeof(char) * (lg[i] + 1));
	// 	if (!tab[i])
    //     {
    //         ft_free(tab, lg, i - 1);
    //         return (NULL);
    //     }
	// 	i++;
	// }	
	// tab[count] = NULL;
	// while (*s && *s == c)
	// 	s++;
	// i = 0;
	// while (i < count)
	// {
	// 	ft_strlcpy(tab[i], s, lg[i] + 1);
	// 	s = s + lg[i];
	// 	while (*s && *s == c)
	// 		s++;
	// 	i++;
	// }
	// return (tab);
//} 
//static int	*ft_allocate(const char *s, char c, int count, int *tab)
// {
// 	int	i;
// 	int	j;

// 	j = 0;
// 	while (j < count)
// 	{
// 		i = 0;
// 		while (*s && *s == c)
// 			s++;
// 		while (*s != c && *s)
// 		{
// 			i++;
// 			s++;
// 		}
// 		// while (*s && *s == c)
// 		// 	s++;
// 		tab[j] = i;
// 		j++;
// 	}
// 	return (tab);
// }

// int main()
//     {
//         char str[] = "hello.jdjdjk..odldjfn";
//         char **tab = NULL;
//         int i = 0;
//         int j = 0;
//         int *lg;
//         // lg = ft_allocate(str,'/',4);
//         // printf("%d %d %d %d \n",lg[0], lg[1], lg[2], lg[3]);
//         tab =ft_split(str, '.');
		
//         while(tab[j])
//         {
//             printf("%s" ,tab[j]);
//             printf("\n");
//             j++;
//         }
//     }
