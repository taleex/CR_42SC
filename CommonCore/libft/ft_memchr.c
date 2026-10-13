#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t leng;
    const unsigned char *str;

    leng = 0;
    str = (const unsigned char *)s;
    while (leng < n)
    {
        if (str[leng] == (unsigned char)c)
            return ((void *)&str[leng]);
        leng++;
    }
    return (NULL);
}