#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t leng;

    leng = 0;
    while (leng < n)
    {
        if (s1[leng] != s2[leng])
            return ((unsigned char)s1[leng] - (unsigned char)s2[leng]);
        leng++;
    }
    return (0);
}