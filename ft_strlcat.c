/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:42:25 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/29 23:22:53 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	int		i;
	int		j;
	int		l;

	l = len;
	i = 0;
	j = 0;
	while (dest[i] && i < l)
		i++;
	while (src[j] && (j + i < l - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != l)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
