/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:46:13 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/12 18:05:51 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     len;

    len = ft_strlen(s);
    while (len >= 0)
    {
        if (s[len] == (char)c)
            return ((char *)s + len);
        len--;
    }
    return (0);
}