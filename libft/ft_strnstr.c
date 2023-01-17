/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 00:26:47 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/17 00:31:15 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len = ft_strlen(needle);
    if (needle_len == 0) {
        return (char *)haystack;
    }
    if (needle_len > len) {
        return NULL;
    }
    char *p1 = (char *)haystack;
    char *p2 = (char *)needle;
    char *p1_end = (char *)haystack + len - needle_len;
    while (p1 <= p1_end) {
        if (*p1 == *p2) {
            if (ft_strncmp(p1, p2, needle_len) == 0) {
                return p1;
            }
        }
        p1++;
    }
    return NULL;
}