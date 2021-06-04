/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:02:43 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/28 12:07:22 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t len)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	a;

	a = c;
	i = 0;
	s1 = (unsigned char*)arr;
	while (i < len)
	{
		if (s1[i] == a)
			return ((unsigned char*)s1 + i);
		i++;
	}
	return (NULL);
}
