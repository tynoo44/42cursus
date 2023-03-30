/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:52:50 by ralonso-          #+#    #+#             */
/*   Updated: 2023/03/23 20:15:43 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src > dst)
		ft_memcpy(dst, src, n);
	else
	{
		while (n-- > 0 && (dst || src))
		{
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	return (dst);
}
