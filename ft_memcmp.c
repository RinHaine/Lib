/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:51:25 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/28 12:08:09 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*arr1;
	unsigned char	*arr2;
	size_t			i;

	arr1 = (unsigned char*)s1;
	arr2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (arr1[i] != arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}
