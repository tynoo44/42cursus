/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:45:41 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/17 00:17:33 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	char *aux;

	aux = 0;
	ft_strlcpy(aux, str, ft_strlen(str));
	i = 0;
	while (i < n)
	{
		if (((char *)aux)[i] == (char)c)
			return (&(aux[i]));
		i++;
	}
	return (0);
}