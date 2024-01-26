/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:33:47 by ralonso-          #+#    #+#             */
/*   Updated: 2024/01/14 16:34:11 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*aux;

	aux = s;
	i = 0;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n != 0 && i < n && (dst || src))
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;

	if (!s1)
		return (0);
	if (!s2)
		return (s1);
	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (0);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	free (s1);
	return (join);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s++ == 0)
			return (0);
	}
	return ((char *)s);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(sizeof(char) * (len));
	if (dup)
	{
		if (s > dup)
			ft_memcpy(dup, s, len);
		else
		{
			while (len-- > 0 && (dup || s))
			{
				((char *)dup)[len] = ((char *)s)[len];
			}
		}
		return (dup);
	}
	return (0);
}
