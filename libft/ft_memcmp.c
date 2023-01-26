/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 00:18:04 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/25 19:23:05 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)p1)[i] == ((unsigned char *)p2)[i])
			i++;
		else if(((unsigned char *)p1)[i] > ((unsigned char *)p2)[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}