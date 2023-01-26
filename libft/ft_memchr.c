/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:45:41 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/26 17:49:42 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	char *aux;

	aux = 0;
	ft_memcpy(aux, str, ft_strlen(str));
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)aux)[i] == (unsigned char)c)
			return (&(aux[i]));
		i++;
	}
	return (0);
}