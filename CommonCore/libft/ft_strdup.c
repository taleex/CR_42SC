#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t leng;
    char *dst;

    leng = 0;
    while (s[leng])
    {
        leng++;
    }
    dst = malloc((leng + 1));
    if (!dst)
        return (NULL);
    leng = 0;
    while (s[leng])
    {
        dst[leng] = s[leng];
        leng++;
    }
    dst[leng] = '\0';
    return (dst);
}