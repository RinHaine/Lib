/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:34:41 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/28 12:10:21 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	if (!s1 && !s2)
		return (NULL);
	if (s2 <= s1)
		while (len > 0)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	else
		ft_memcpy(s1, s2, len);
	return ((void *)s1);
}
