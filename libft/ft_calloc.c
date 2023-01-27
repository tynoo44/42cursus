#include "./libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc(nmemb * size);
    if (ptr)
	{
        ft_memset(ptr, 0, nmemb * size);
    }
    return (ptr);
}