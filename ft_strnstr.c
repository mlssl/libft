/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:42:58 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/20 11:18:19 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_j(const char *haystack, const char *needle, size_t len,
		size_t i)
{
	size_t	j;

	j = 0;
	while (needle[j] != '\0' && needle[j] == haystack[i] && i < len)
	{
		j++;
		i++;
	}
	return (j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	j = 0;
	index = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i <= len)
	{
		if (haystack[i] == needle[0])
		{
			index = i;
			j = ft_count_j(haystack, needle, len, i);
			if (needle[j] == '\0')
				return ((char *)(&haystack[index]));
		}
		i++;
		j = 0;
	}
	return (NULL);
}
