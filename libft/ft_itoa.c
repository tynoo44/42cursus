/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:53:32 by ralonso-          #+#    #+#             */
/*   Updated: 2023/03/30 20:36:48 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	get_num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*itoa_helper(int n, int len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
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
	return (str);
}

char	*ft_itoa(int n)
{
	int	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_num_len(n);
	return (itoa_helper(n, len));
}
