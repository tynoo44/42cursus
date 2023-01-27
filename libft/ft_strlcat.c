/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:46:52 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/27 18:31:00 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
    dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);

    if (dstsize <= dstlen)
        return srclen + dstsize;

    dst += dstlen;
    dstsize -= dstlen;
    while (*src && --dstsize)
        *dst++ = *src++;
    *dst = '\0';
    return (dstlen + srclen);
}