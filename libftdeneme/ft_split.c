/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsagman <amsagman@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:33:18 by amsagman          #+#    #+#             */
/*   Updated: 2024/11/07 13:06:35 by amsagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_words(char const *s, char sep)
{
	size_t	count;

	if (!*s || !s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != sep)
				s++;
		}
	}
	return (count);
}

static char	**ft_split_words(char **res, char const *s, char sep, int wordcnt)
{
	char const	*start;
	int			i;

	i = 0;
	while (*s && i < wordcnt)
	{
		while (*s == sep)
			s++;
		start = s;
		while (*s && *s != sep)
			s++;
		res[i] = ft_substr(start, 0, s - start);
		if (!res[i])
		{
			while (i > 0)
				free(res[--i]);
			free(res);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**result;

	if (!s)
		return (NULL);
	wordcount = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!result)
		return (NULL);
	return (ft_split_words(result, s, c, wordcount));
}
