/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:46:52 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/16 23:35:23 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len;
	size_t src_len;
	size_t n;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
    n = dstsize - dst_len - 1;
    i = 0;

    while (i < n && src[i])
	{
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}