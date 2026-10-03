#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    size_t leng;

    leng = 0;
    while(leng < n)
    {
        ((unsigned char *)str)[leng] =  (unsigned char)c;
        leng++;
    }
    return (str);
}