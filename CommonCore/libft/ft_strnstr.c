#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t leng;
    size_t i;

    leng = 0;
    if (little[0] == '\0')
        return ((char *)big);
    if (len == 0)
        return (NULL);
    while (leng < len && big[leng])
    {
        i = 0;
        while ((leng + i) < len &&
               big[leng + i] &&
               big[leng + i] == little[i])
        {
            i++;
        }
        if (little[i] == '\0')
            return ((char *)&big[leng]);
        leng++;
    }
    return (NULL);
}