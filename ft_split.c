/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:58:07 by gcorneli          #+#    #+#             */
/*   Updated: 2020/11/27 14:35:00 by gcorneli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**clean_memory(char **strings)
{
	int	j;

	j = 0;
	while (strings[j])
	{
		free(strings[j]);
		j++;
	}
	free(strings);
	return (NULL);
}

static int		array_high(char const *s, char c)
{
	int	word;
	int	high;
	int	i;

	word = 0;
	high = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			word = 0;
		else if (word == 0)
		{
			word = 1;
			high++;
		}
		i++;
	}
	return (high);
}

static size_t	s_len(char const *s, int start, char c)
{
	size_t	len;

	len = 0;
	while (s[start] != '\0')
	{
		if (s[start] == c)
			return (len);
		len++;
		start++;
	}
	return (len);
}

static char		**make_strings(char const *s, char c)
{
	char	**s_arr;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	if (!(s_arr = (char **)malloc(sizeof(char*) * (array_high(s, c) + 1))))
		return (NULL);
	s_arr[array_high(s, c)] = NULL;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			if (k == 0)
				if (!(s_arr[j] = malloc(sizeof(char) * (s_len(s, i, c) + 1))))
					return (clean_memory(s_arr));
			s_arr[j][k] = s[i];
			s_arr[j][++k] = '\0';
		}
		if ((s[i] == c && s[i + 1] != c && k > 0) && (k = 0) == 0)
			j++;
	}
	return (s_arr);
}

char			**ft_split(char const *s, char c)
{
	char	**strings;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	strings = make_strings(s, c);
	if (!strings)
		return (NULL);
	return (strings);
}
