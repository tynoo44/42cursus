#include "get_next_line.h"

int	gnl_finder(char	*backup)
{
	int i;

	i = 0;
	while (backup[i] != 0 && backup[i] != '\n')
		i++;
	if (backup[i] == '\n')
		return (i);
	else
		return (0);
}

char	*gnl_gl(int fd, char **backup)
{
	int		bytes_readed;
	char	*line;
	char	*mem;
	int		pos;
	
	bytes_readed = 1;
	while (bytes_readed != 0)
	{

		mem = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		bytes_readed = read(fd, mem, BUFFER_SIZE);
		if(bytes_readed == -1)
			return (0);
		else if(bytes_readed == 0)
			break;
		mem[bytes_readed] = '\0';
		if (!*backup)
			*backup = ft_strdup("");
		*backup = ft_strjoin(*backup, mem);
		free(mem);
		if(ft_strchr(*backup, '\n') != 0)
			break;
	}
	pos = gnl_finder(*backup);
	line = ft_substr(*backup, 0, pos + 1);
	*backup = ft_substr(*backup, pos + 1, (ft_strlen(*backup) - (pos + 1)));
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*backup;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	line = gnl_gl(fd, &backup);
	return(line);
}

/*int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	printf("1%s\n", line);

	line = get_next_line(fd);
	printf("2%s\n", line);

	line = get_next_line(fd);
	printf("3%s\n", line);
	close(fd);
	return (0);
}*/