#include "./libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (0);
    i = 0;
    while (i < len && s[start + i])
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}
