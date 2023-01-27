/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:05:58 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/27 18:05:59 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc(nmemb * size);
    if (ptr)
	{
        ft_memset(ptr, 0, nmemb * size);
    }
    return (ptr);
}