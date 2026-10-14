int ft_atoi(const char *nptr)
{
    int leng;
    int flag;
    int res;

    leng = 0;
    flag = 1;
    res = 0;
    while ((nptr[leng] == ' ') || (nptr[leng] >= 9 && 13 >= nptr[leng]))
        leng++;
    if (nptr[leng] == '-' || nptr[leng] == '+')
    {
        if (nptr[leng] == '-')
        {
            flag = -1;
        }
        leng++;
    }
    while (nptr[leng] >= '0' && '9' >= nptr[leng])
    {
        res = (res * 10) + nptr[leng] - '0';
        leng++;
    }
    return (res * flag);
}