/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:40:54 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 10:25:37 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *dest, int len, int sign)
{
	int		i;
	char	buffer;

	i = 0;
	if (sign == 1)
	{
		buffer = dest[i];
		dest[i] = '-';
		dest[len - 1] = buffer;
		i = 1;
		len = len - 1;
	}
	while (i < len)
	{
		buffer = dest[i];
		dest[i] = dest[len - 1];
		dest[len - 1] = buffer;
		i++;
		len--;
	}
	return (dest);
}

static int	ft_len_n(int n)
{
	int	len;
	int	nb;

	len = 0;
	nb = n;
	if (n == 0)
		len++;
	else
	{
		while (nb != 0)
		{
			nb = nb / 10;
			len++;
		}
	}
	return (len);
}

static char	*ft_copy(char *dest, int len, int n)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		sign;
	int		nb;

	sign = 0;
	nb = n;
	if (n < 0)
	{
		sign = 1;
		n = n * (-1);
	}
	len = ft_len_n(n) + sign;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	if (nb <= -2147483648)
	{
		ft_strlcpy(dest, "-2147483648", 12);
		return (dest);
	}
	dest = ft_copy(dest, len, n);
	dest = ft_reverse(dest, len, sign);
	return (dest);
}
