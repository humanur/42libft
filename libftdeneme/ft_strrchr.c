/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsagman <amsagman@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:58:32 by amsagman          #+#    #+#             */
/*   Updated: 2024/11/05 15:37:00 by amsagman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last_found_char;

	last_found_char = 0;
	while (*s)
	{
		if (*s == (char)c)
			last_found_char = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_found_char);
}
