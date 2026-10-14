#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
    char *res;

    res = malloc(size * n);
    if (!res)
        return (NULL);
    ft_bzero(res, size * n);
    return (res);
}