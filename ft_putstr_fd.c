/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:30:03 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/08 12:30:07 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <fcntl.h>
void    ft_putstr_fd(char *s,int fd)
{
    int i;
    i = 0;
    while(s[i] != '\0')
    {
        write(fd,&s[i],1);
        i++;
    }
}
int main()
{
    char str[]="hekid";
    ft_putstr_fd(str,open("test", O_WRONLY));
}