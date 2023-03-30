#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
