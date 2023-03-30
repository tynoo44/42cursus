#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	*rest;
	char		buf[BUFFER_SIZE + 1];
	char		*ptr;
	ssize_t		n;

	if (!line || fd < 0 || BUFFER_SIZE <= 0)
		return (-1);
	*line = NULL;
	if (rest && (*line = ft_strdup(rest)) && (ptr = ft_strchr(*line, '\n')))
	{
		*ptr = '\0';
		rest = ft_strdup(ptr + 1);
		return (1);
	}
	while ((n = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[n] = '\0';
		*line = ft_strjoin(*line, buf);
		if ((ptr = ft_strchr(*line, '\n')))
		{
			*ptr = '\0';
			rest = ft_strdup(ptr + 1);
			return (1);
		}
	}
	if (n < 0)
		return (-1);
	return ((*line && **line) ? 1 : 0);
}
