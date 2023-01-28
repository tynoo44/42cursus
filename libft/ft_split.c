#include "./libft.h"

char    **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    int     k;
    char    **str;

    i = 0;
    k = 0;
    if (!s || !(str = (char **)malloc(sizeof(char *) * ft_strlen(s))))
        return (NULL);
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
    str[k] = NULL;
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