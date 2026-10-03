#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t leng;

    leng = 0;
    while(leng < n)
    {
        ((unsigned char *)s)[leng] =  0;
        leng++;
    }
}