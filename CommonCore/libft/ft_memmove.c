#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t leng;

    if(dest < src)
    {
        leng = 0;
        while(leng < n)
        {
            ((unsigned char *)dest)[leng] = ((const unsigned char *)src)[leng];
            leng++;
        }
    }
    else
    {
        leng = n;
        while(leng > 0)
        {
            leng--;
            ((unsigned char *)dest)[leng] = ((const unsigned char *)src)[leng];
        }
    }
    
    return (dest);
}