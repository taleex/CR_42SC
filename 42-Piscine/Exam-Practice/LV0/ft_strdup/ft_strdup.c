/*
======================================./2-0-ft_strdup.txt=========================================
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
==========================================================================================
*/

#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
    int leng = 0;

    if (!src)
        return NULL;

    while (src[leng])
    {
        leng++;
    }

    dest = malloc((leng + 1) * sizeof(char));
    if (!dest)
        return NULL;

    leng = 0;
    while (src[leng])
    {
        dest[leng] = src[leng];
        leng++;
    }
    dest[leng] = '\0';

    return (dest);
}

#include <stdio.h>

int main(void)
{
    char src[] = "im the source";
    char *dest = ft_strdup(src);

    if (dest)
    {
        printf("%s \n", dest);
        free(dest);
    }
}