#include "get_next_line.h"

char	*gnl_gl(char	*fd, char	*)


char	*get_next_line(int fd)
{
	char		*line;
	static char	*backup;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	backup = gnl_gl(fd, backup)
}

int	main(int argc, char **argv)
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
}