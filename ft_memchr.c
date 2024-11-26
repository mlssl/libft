/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:35:01 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 10:12:17 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tab;
	unsigned char		find;
	size_t				i;

	i = 0;
	tab = (const unsigned char *)s;
	find = (unsigned char)c;
	while (i < n)
	{
		if (tab[i] == find)
			return ((void *)(tab + i));
		i++;
	}
	return (NULL);
}
