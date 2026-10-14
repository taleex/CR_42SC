#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dst;
    size_t leng;

    leng = 0;
    while (leng < len && s[leng])
    {
        leng++;
    }

    dst =
}