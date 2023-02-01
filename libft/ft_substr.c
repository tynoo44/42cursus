/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:06:40 by ralonso-          #+#    #+#             */
/*   Updated: 2023/02/01 12:59:17 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "./libft.h"

/*char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;
	
    sub = malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (0);
    i = 0;
    while (i < len && s[start + i] && ft_strlen(s) >= start)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}*/

/*char    *ft_substr(char const *s, unsigned int start2, size_t len)
{
    char    *sub;
	size_t start;
    size_t  i;

	start = (size_t)start2;

    if (!s)
        return (NULL);
    if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    if (start < ft_strlen(s))
        while (i < len && s[start + i])
        {
            sub[i] = s[start + i];
            i++;
        }
    sub[i] = '\0';
    return (sub);
}*/
/*int main(void)
{
	printf("%s", ft_substr("test", 1, 2));
	return 0;
}*/
char    *ft_substr(char const *s1, unsigned int start, size_t len)
{
    char    *s2;
    size_t  s1len;
	
    s1len = ft_strlen(s1);
    if (s1len < start)
    {
        len = 0;
        start = s1len;
    }
    else if ((s1len - start) < len)
        len = s1len - start;
    s2 = malloc(sizeof(char) * (len + 1));
    if (!s2)
        return (0);
    ft_strlcpy(s2, s1 + start, len + 1);
    return (s2);
}