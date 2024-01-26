/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:29:43 by ralonso-          #+#    #+#             */
/*   Updated: 2023/06/02 03:10:47 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	**ft_freestr(char **str, int i)
{
	while (i-- > 0)
		free (str[i]);
	free (str);
	return (0);
}

static char	**ft_split2(char const *s, char c, int i, int k)
{
	int		j;
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!s || !str)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			str[k++] = ft_substr(s, j, i - j);
			if (!str[k - 1])
				return (ft_freestr(str, k - 1));
		}
	}
	str[k] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	return (ft_split2(s, c, 0, 0));
}
