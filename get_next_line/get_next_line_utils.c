#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n != 0 && i < n && (dst || src))
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (len + 1));
	if (!join)
		return (0);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_memcpy(join + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (join);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src > dst)
		ft_memcpy(dst, src, n);
	else
	{
		while (n-- > 0 && (dst || src))
		{
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	return (dst);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup)
	{
		ft_memmove(dup, s, len + 1);
		return (dup);
	}
	return (0);
}
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s++ == 0)
			return (0);
	}
	return ((char *)s);
}

char	*ft_substr(char const *s1, unsigned int start, size_t len)
{
	char	*s2;
	size_t	s1len;

	s1len = ft_strlen(s1);
	if (s1len < start)
	{
		len = 0;
		start = s1len;
	}
	else if ((s1len - start) < len)
		len = s1len - start;
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1 + start, len + 1);
	return (s2);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (n != 0 && i < n -1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
