#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t leng;

    leng = 0;
    while(leng < n)
    {
        ((unsigned char *)dest)[leng] = ((const unsigned char *)src)[leng];
        leng++;
    }
    return (dest);
}