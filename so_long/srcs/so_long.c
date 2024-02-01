/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralonso- <ralonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:17:30 by ralonso-          #+#    #+#             */
/*   Updated: 2024/02/01 22:15:34 by ralonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../includes/so_long.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}
int	check_format(const char *s)
{
	size_t	i;

	char *ber;

	ber = ".ber\0";
	i = ft_strlen(s);
	if (ft_strncmp(&s[i - 4], ber, 4) != 0)
	{
		printf("Invalid map extension\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc < 1)
	{
		printf("Invalid Arguments\n");
		return (0);	
	}
	if (check_format(argv[1]) == 0)
	{
		printf("extension correcta");
	}
	return (0);
}