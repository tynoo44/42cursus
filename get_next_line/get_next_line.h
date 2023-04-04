#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

# define BUFFER_SIZE 42 // Tamaño del buffer utilizado para leer del archivo

char	*get_next_line(int fd);
char	*ft_strdup(const char *s);
void	*ft_memmove(void *dst, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s1, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);

#endif
