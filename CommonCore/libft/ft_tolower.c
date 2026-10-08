int ft_tolower(int c)
{
    if ((c >= 'A' && 'Z' >= c))
        c += 32;
    return (c);
}