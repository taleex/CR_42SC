#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t leng;
    char *destmov;
    const char *srcmov;

    if (!dest && !src)
        return (NULL);
    destmov = (char *)dest;
    srcmov = (char *)src;
    leng = 0;
    if (destmov > srcmov)
    {
        while (n--)
        {
            destmov[n] = srcmov[n];
        }
    }
    else
    {
        while (n--)
        {
            destmov[leng] = srcmov[leng];
            leng++;
        }
    }
    return (destmov);
}