/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:43:29 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 10:29:40 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_set(char letter, char const *set)
{
	size_t	i;

	i = 0;
	if (set[i] != '\0')
	{
		while (set[i] != '\0')
		{
			if (letter == set[i])
				return (1);
			i++;
		}
	}
	return (0);
}

static size_t	tot_strlen(char const *str, char const *set)
{
	size_t	len_set;
	size_t	len_str;

	len_set = 0;
	len_str = ft_strlen(str);
	while (str[len_set] != '\0' && ft_is_set(str[len_set], set) == 1)
		len_set++;
	if (len_set == len_str)
		return (0);
	while (len_str > len_set && ft_is_set(str[len_str - 1], set) == 1)
		len_str--;
	return (len_str - len_set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	len;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		return (NULL);
	len = tot_strlen(s1, set);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_is_set(s1[i], set) == 1)
		i++;
	while (j < len)
	{
		dest[j] = (char)s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
