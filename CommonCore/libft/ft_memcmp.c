#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t leng;
    const unsigned char *str1;
    const unsigned char *str2;

    leng = 0;
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    while (leng < n)
    {
        if (str1[leng] != str2[leng])
            return (str1[leng] - str2[leng]);
        leng++;
    }
    return (0);
}