/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 00:26:47 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/17 21:38:46 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_len;
	const char *end;

	little_len = ft_strlen(little);
	end = big + len - little_len;
	if (little_len == 0)
		return ((char *)big);
	if (len < little_len)
		return NULL;

	while (big <= end)
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0)
			return (char *) big;
		big++;
	}
	return (0);
}




 // obtiene la longitud de la cadena little
 // si little esta vacio, devuelve el puntero de big
 // si len es menor que la longitud de little, devuelve NULL
 // se establece el puntero final del recorrido
 // mientras big no sobrepase el puntero final
// si big y little tienen el mismo caracter inicial y la comparación de
// los siguientes caracteres es igual a 0, devuelve el puntero de big
 // incrementa el puntero de big







