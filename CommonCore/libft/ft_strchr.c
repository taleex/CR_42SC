char *ft_strchr(const char *s, int c)
{
    int leng;

    leng = 0;
    while (s[leng])
    {
        if (s[leng] == c)
            return ((char *)s + leng);
        leng++;
    }
    if (c == '\0')
        return ((char *)s + leng);
    return (0);
}