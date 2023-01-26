/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:21:33 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/25 20:16:52 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t i;
	
	i = 0;
	if (n != 0)
	{
		while (n != 0 && i < n -1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	
	return (ft_strlen(src));
}