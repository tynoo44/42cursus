/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:36:04 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/17 19:20:03 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	char *aux;
	
	aux = s;
	i = 0;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}