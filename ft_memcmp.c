/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:53:35 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 10:26:32 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sentencebis1;
	unsigned char	*sentencebis2;
	size_t			i;

	i = 0;
	sentencebis1 = (unsigned char *)s1;
	sentencebis2 = (unsigned char *)s2;
	while (i < n)
	{
		if (sentencebis1[i] != sentencebis2[i])
			return (sentencebis1[i] - sentencebis2[i]);
		i++;
	}
	return (0);
}
