/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:31:51 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/26 19:20:16 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		char_in_string(char c, char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (char_in_string(s1[start], (char*)set) >= 0)
		start++;
	while ((char_in_string(s1[end - 1], (char*)set) >= 0) && (end > start))
		end--;
	return (ft_substr(s1, start, end - start));
}
