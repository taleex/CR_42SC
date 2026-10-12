#include "libft.h"

void *ft_memchr(void *s, int c, size_t n)
{
    size_t leng;
    unsigned char *str;

    leng = 0;
    str = (unsigned char *)s;
    while (leng < n)
    {
        if (str[leng] == (unsigned char)c)
            return (&str[leng]);
        leng++;
    }
    return (NULL);
}