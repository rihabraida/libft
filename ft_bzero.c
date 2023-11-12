/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:07:07 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/11 17:06:00 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	int				i;
	unsigned char	*dt;

	i = 0;
	dt = (unsigned char *)dest;
	while (n)
	{
		dt[i] = 0;
		i++;
		n--;
	}
}
// int main()
// {
// 	int *dest =NULL;
// 	ft_bzero(dest, 5);
// 	printf("%i %i",dest[0] ,dest[1]);
// }
