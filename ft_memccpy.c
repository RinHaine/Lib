/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:08:25 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/27 00:33:25 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == (unsigned char)c)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
