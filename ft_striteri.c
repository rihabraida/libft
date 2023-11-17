/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:10:11 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 19:25:53 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
			s++;
			i++;
		}
	}
}
// void f(unsigned int i, char c)
// {
// 	char str;
// 	str = c + i;
// 	return (str);
// }

// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_striteri(str1,f);
// 	printf("%s\n", str2);
// }