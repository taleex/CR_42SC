#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t leng;
    size_t i;

    leng = 0;
    i = 0;
    while (src[leng])
        leng++;
    if (dstsize == 0)
        return (leng);
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (leng);
}