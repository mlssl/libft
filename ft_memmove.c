/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:00:18 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 18:15:13 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*overlap(unsigned char *tabdest,
		const unsigned char *tabsrc, size_t n)
{
	size_t	i;

	i = 1;
	while (i <= n)
	{
		tabdest[n - i] = tabsrc[n - i];
		i++;
	}
	return (tabdest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tabdest;
	const unsigned char	*tabsrc;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	tabdest = (unsigned char *)dest;
	tabsrc = (const unsigned char *)src;
	if (dest > src && dest < src + n)
		tabdest = overlap(tabdest, tabsrc, n);
	else
	{
		while (i < n)
		{
			tabdest[i] = tabsrc[i];
			i++;
		}
	}
	return (dest);
}
