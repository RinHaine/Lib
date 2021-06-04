/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:31:13 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/27 15:21:39 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*newstr;
	size_t	newstr_size;

	newstr_size = count * size;
	newstr = (char*)malloc(newstr_size);
	if (newstr)
	{
		ft_bzero(newstr, newstr_size);
		return ((void *)newstr);
	}
	return (NULL);
}
