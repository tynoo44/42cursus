/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:45:03 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/16 21:28:21 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char   *d;

	d = 0;
	ft_strlcpy(d, dst, ft_strlen(dst));
    ft_strlcpy(dst, src, n);
    return (d);
}