/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:06:14 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/27 18:06:18 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *ft_strdup(const char *s)
{
    size_t len;
    char *dup;

    len = ft_strlen(s);
    dup = (char *)malloc(sizeof(char) * (len + 1));
    if (dup)
    {
        ft_memmove(dup, s, len + 1);
        return (dup);
    }
    return (0);
}
