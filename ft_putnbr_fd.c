/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:26:48 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 10:15:27 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	my_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void	my_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		my_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		my_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n > 9)
		ft_putnbr_fd((n / 10), fd);
	my_putchar_fd(n % 10 + '0', fd);
}
