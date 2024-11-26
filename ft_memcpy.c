/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:17:11 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 10:26:30 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tabdest;
	const unsigned char	*tabsrc;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	tabdest = (unsigned char *)dest;
	tabsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tabdest[i] = tabsrc[i];
		i++;
	}
	return (tabdest);
}
