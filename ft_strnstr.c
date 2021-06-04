/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:26:11 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/26 18:05:39 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s2[i] == '\0')
		return ((char*)s1);
	while (s1[i] != '\0' && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (i + j < len && s1[i + j] == s2[j])
			{
				j++;
				if (s2[j] == '\0')
					return ((char*)&s1[i]);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
