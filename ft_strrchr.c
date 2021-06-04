/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:13:16 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/26 18:55:05 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	s = (char *)str;
	i = ft_strlen(s);
	if (c == '\0')
		return (&s[i]);
	while (i > 0)
	{
		if (s[i - 1] == c)
			return (&s[i - 1]);
		i--;
	}
	return (NULL);
}
