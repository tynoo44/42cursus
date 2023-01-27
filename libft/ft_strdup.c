#include "./libft.h"
#include <stdio.h>

char *ft_strdup(const char *s)
{
    size_t len;
    char *dup;

    len = ft_strlen(s);
    dup = (char *)malloc(sizeof(char) * (len + 1));
    if (dup)
    {
        ft_memmove(dup, s, len + 1);
        return (dup);
    }
    return (0);
}
