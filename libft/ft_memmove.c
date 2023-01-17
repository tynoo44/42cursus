/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:52:50 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/16 21:28:59 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    char	*d;
	char	*t;
	
	d = 0;
	t = 0;
	
	ft_strlcpy(d, dst, ft_strlen(dst));
	ft_strlcpy(t, src, ft_strlen(src));
    ft_strlcpy(dst, t, n);
    return (d);
}