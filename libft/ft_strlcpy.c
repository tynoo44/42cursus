/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:21:33 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/17 22:37:44 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t i;
	
	i = 0;
	while (i < n - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(dst));
}