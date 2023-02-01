#include "./libft.h"


char    *ft_itoa(int n)
{
    int		temp;
    int		len;
    char	*str;

	if (n == -2147483648)
	{
		str = malloc(12);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
    temp = n;
    len = (n <= 0) ? 1 : 0;
    while (temp)
    {
        temp /= 10;
        len++;
    }
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (0);
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    str[len] = '\0';
    while (n)
    {
        str[--len] = n % 10 + '0';
        n /= 10;
    }
    return (str);
}
/*
int main(void)
{
    int num = 4221354344;	
	char *str = ft_itoa(num);
    printf("%s\n", str);
    free(str);
    return 0;
}*/