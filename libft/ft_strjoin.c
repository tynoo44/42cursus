/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:05:41 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/27 18:05:42 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    size_t  len;

    len = ft_strlen(s1) + ft_strlen(s2);
    join = (char *)malloc(sizeof(char) * (len + 1));
    if (!join)
        return (0);
    ft_memcpy(join, s1, ft_strlen(s1));
    ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
    return (join);
}