/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:49:00 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/16 23:47:12 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *aux;

	aux = s;
	i = 0;
	while (i < n)
	{
		aux[i] = (unsigned char)c;
		i++;
	}
	return (s);
}