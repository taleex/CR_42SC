int ft_toupper(int c)
{
    if ((c >= 'a' && 'z' >= c))
        c -= 32;
    return (c);
}