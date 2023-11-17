/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:53:24 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 15:49:34 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(long c)
{
	long	i;

	i = 0;
	if (c == 0)
		i++;
	if (c < 0)
	{
		i++;
		c = -c;
	}
	while (c > 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*p;
	int		c;
	long	n;

	n = nbr;
	c = 0;
	c = len_int(n);
	p = malloc(sizeof(char) * (c + 1));
	if (!p)
		return (NULL);
	if (n == 0)
		p[0] = '0';
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	p[c] = '\0';
	while (n > 0)
	{
		p[c - 1] = n % 10 + 48;
		n = n / 10;
		c--;
	}
	return (p);
}
