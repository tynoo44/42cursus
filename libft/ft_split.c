/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:29:43 by ralonso-          #+#    #+#             */
/*   Updated: 2023/02/01 11:29:44 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int ft_count_words(char const *s, char c)
{
    int i;
    int words;

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

char    **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    int     k;
    char    **str;

    i = 0;
    k = 0;
	
    if (!s || !(str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
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
            str[k] = ft_substr(s, j, i - j);
            k++;
        }
    }
    str[k] = 0;
    return (str);
}
/*
int main(void)
{
    char *string = "Hello, world! This is a test.";
    char **result;
    int i;

    result = ft_split(string, ' ');
    i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        i++;
    }
    return (0);
}*/