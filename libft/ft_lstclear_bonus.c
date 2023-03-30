/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:15:16 by ralonso-          #+#    #+#             */
/*   Updated: 2023/03/23 20:11:48 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*auxnode;

	while ((*lst) != NULL)
	{
		auxnode = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = auxnode;
	}
}
