/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsagman <amsagman@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:47:42 by amsagman          #+#    #+#             */
/*   Updated: 2024/11/05 15:36:49 by amsagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hay;
	const char	*need;
	size_t		len2;

	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *haystack)
	{
		hay = haystack;
		need = needle;
		len2 = len;
		while (*need && len2 && (*hay == *need))
		{
			hay++;
			need++;
			len2--;
		}
		if (!*need)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
