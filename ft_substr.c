/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:38:21 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/26 16:16:16 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < i)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		if (!s1)
			return (NULL);
		s1[j] = '\0';
		return (s1);
	}
	s1 = (char *)malloc(sizeof(char) * len + 1);
	if (!s1)
		return (NULL);
	while (s[i] != '\0' && j < len)
		s1[j++] = s[i++];
	s1[j] = '\0';
	return (s1);
}
