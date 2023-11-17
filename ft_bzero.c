/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:07:07 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/15 19:06:45 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t			i;
	unsigned char	*dt;

	i = 0;
	dt = (unsigned char *)dest;
	while (i < n)
	{
		dt[i] = 0;
		i++;
	}
}
// int main()
// {
// 	int *dest =NULL;
// 	ft_bzero(dest, 5);
// 	printf("%i %i",dest[0] ,dest[1]);
// }
