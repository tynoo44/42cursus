#include "./libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *str;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = ft_strlen(s1) - 1;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (end > start && ft_strchr(set, s1[end]))
        end--;
    len = end - start + 1;
    str = ft_substr(s1, start, len);
    return (str);
}

int main()
{
    char *str1 = "   Hello, World!   ";
    char *str2 = "   Hello, World!   ";
    char *str3 = "  ";
    char *str4 = "";
    char *str5 = "";

    printf("Original String: %s\n", str1);
    printf("Trimmed String: %s\n", ft_strtrim(str1, " "));
    printf("Original String: %s\n", str2);
    printf("Trimmed String: %s\n", ft_strtrim(str2, " "));
    printf("Original String: %s\n", str3);
    printf("Trimmed String: %s\n", ft_strtrim(str3, " "));
    printf("Original String: %s\n", str4);
    printf("Trimmed String: %s\n", ft_strtrim(str4, " "));
    printf("Original String: %s\n", str5);
    printf("Trimmed String: %s\n", ft_strtrim(str5, " "));

    return 0;
}