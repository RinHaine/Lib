/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:09:40 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/28 12:06:21 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	if (!s || !f)
		return (NULL);
	newstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
