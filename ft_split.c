#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_count_words(char *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

int		ft_word_len(char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != c && str[len])
		len++;
	return (len);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	i = 0;
	j = 0;
	k = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (ft_count_words(str, c) + 1))))
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			if (!(res[k] = (char *)malloc(sizeof(char) * (ft_word_len(&str[i], c) + 1))))
				return (NULL);
			j = 0;
			while (str[i] != c && str[i])
				res[k][j++] = str[i++];
			res[k++][j] = '\0';
		}
	}
	res[k] = NULL;
	return (res);
}
int main()
{
	int i = 0;
	char **matrix;
	char str[] = "hola que tal";
	matrix = ft_split(str, ' ');
	while (matrix[i])
	{
		printf("%s\n", matrix[i]);
		i++;
	}
}