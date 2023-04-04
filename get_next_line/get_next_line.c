#include "get_next_line.h"




char	*ft_readfile(int fd, char *mem, char *backup)
{
	int	readed;
	char	*temp;

	readed = 1;
	while (readed != '\0')
	{
		readed = read(fd, mem, BUFFER_SIZE);
		if(readed == -1)
			return (0);
		else if(readed == 0)
			break;
		mem[readed] = '\0';
		if (!backup)
			backup = ft_strdup("");
		temp = backup;
		backup = ft_strjoin(temp, mem);
		free(temp);
		
		printf("AAAAAAAA%s", mem);
		if (ft_strchr (mem, '\n'))
			break ;
	}
}

char	*ft_extract(char *line)
{

}

char	*get_next_line(int fd)
{
	char		*line;
	char		*mem;
	static char	*backup;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	mem = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!mem)
		return (0);
	line = ft_readfile(fd, mem, backup);
	free(mem);
	if (!line)
		return (0);
	
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;


	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	printf("1%s\n", line);

	/*line = get_next_line(fd);
	printf("2%s\n", line);

	line = get_next_line(fd);
	printf("3%s\n", line);*/
	close(fd);
	return (0);
}