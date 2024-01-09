/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raul <raul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 04:38:39 by raul              #+#    #+#             */
/*   Updated: 2023/12/26 04:52:59 by raul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_find_new(char *str)
{
	int		i;
	char	*aux;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	aux = malloc(i + 2);
	if (!aux)
		return (NULL);
	aux[i + 1] = '\0';
	while (i >= 0)
	{
		aux[i] = str[i];
		i--;
	}
	return (aux);
}

char	*ft_update_schar(char *str, int i, int j)
{
	char	*aux;

	if (ft_strchr(str, '\n') == NULL)
	{
		if (str)
			free(str);
		return (NULL);
	}
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	i = i + 1;
	if (str[i - 1] == '\0')
		return (str);
	aux = malloc((ft_strlen(str) - i) + 1);
	if (!aux)
		return (NULL);
	while (str[i] != 0)
		aux[j++] = str[i++];
	aux[j] = '\0';
	free(str);
	return (aux);
}

char	*read_file(int fd, char *schar)
{
	char		temp[BUFFER_SIZE + 1];
	int			n;

	n = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!schar)
		schar = ft_strdup("");
	while (n > 0 && ft_strchr(schar, '\n') == NULL)
	{
		ft_bzero(temp, BUFFER_SIZE + 1);
		n = read(fd, temp, BUFFER_SIZE);
		if (n > 0)
			schar = ft_strjoin(schar, temp);
	}
	if (n < 0)
	{
		free(schar);
		schar = NULL;
		return (0);
	}
	return (schar);
}

char	*get_next_line(int fd)
{
	static char	*schar;
	char		*line;

	schar = read_file(fd, schar);
	if (!schar)
		return (0);
	line = ft_find_new(schar);
	schar = ft_update_schar(schar, 0, 0);
	if (!*line)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
