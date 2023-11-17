/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:40:25 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/17 15:33:16 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}
// int main()
// {
//     printf("%d     ",open("test", O_WRONLY));
//     printf("%d",open("teskl", O_WRONLY));
//     ft_putchar_fd('C',open("test", O_WRONLY));

// }