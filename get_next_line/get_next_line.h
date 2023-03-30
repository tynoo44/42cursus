#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 42 // Tamaño del buffer utilizado para leer del archivo

int	get_next_line(int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);

#endif
