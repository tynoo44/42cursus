/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:53:32 by ralonso-          #+#    #+#             */
/*   Updated: 2023/03/22 18:59:51 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*char	*ft_itoa(int n)
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
*/

int get_num_len(int n)
{
    int len = (n <= 0) ? 1 : 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    return len;
}

char *itoa_helper(int n, int len)
{
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;

    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while (n)
    {
        str[--len] = n % 10 + '0';
        n /= 10;
    }
    return str;
}

char *ft_itoa(int n)
{
    if (n == -2147483648)
        return ft_strdup("-2147483648");

    int len = get_num_len(n);
    return itoa_helper(n, len);
}