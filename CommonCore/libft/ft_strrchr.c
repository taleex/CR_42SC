char *ft_strrchr(const char *s, int c)
{
    int leng;

    leng = 0;
    while (s[leng])
        leng++;
    while (leng >= 0)
    {
        if (s[leng] == c)
            return ((char *)s + leng);
        leng--;
    }
    return (0);
}