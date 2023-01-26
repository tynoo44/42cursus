/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 00:26:47 by ralonso-          #+#    #+#             */
/*   Updated: 2023/01/18 16:41:09 by ralonso-         ###   ########.fr       */
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
		return (0);
	while (big <= end)
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0)
			return (char *) big;
		big++;
	}
	return (0);
}
