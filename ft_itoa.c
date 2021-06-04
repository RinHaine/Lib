/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:53:04 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/26 19:15:27 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_str_len(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n / 10 != 0 && n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_str_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == -2147483648)
	{
		str[--len] = '8';
		n = -214748364;
	}
	if (n > 0)
		n = n * (-1);
	while (len && n < 0)
	{
		str[--len] = ((-1) * n) % 10 + 48;
		n = n / 10;
	}
	if (len != 0)
		str[0] = '-';
	if (len != 0 && str[1] == '\0')
		str[0] = '0';
	return (str);
}
