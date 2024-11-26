/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:42:34 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 10:29:05 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	const char	*b1;
	const char	*b2;

	i = 0;
	b1 = s1;
	b2 = s2;
	if (!b1[i] && n > 0)
		return (-b2[i]);
	while ((b1[i] != '\0' || b2[i] != '\0') && i < n)
	{
		if (b1[i] != b2[i])
			return ((unsigned char)b1[i] - (unsigned char)b2[i]);
		i++;
	}
	return (0);
}
