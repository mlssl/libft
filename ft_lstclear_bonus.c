/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaussel <mlaussel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:54:53 by mlaussel          #+#    #+#             */
/*   Updated: 2024/11/18 14:04:09 by mlaussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*buffer;

	if (*lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			buffer = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = buffer;
		}
	}
	*lst = NULL;
}
