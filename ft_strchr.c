/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:44 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/10 15:41:18 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str++;
	}
	if ((char)ch == *str)
		return ((char *)str);
	return (NULL);
}
