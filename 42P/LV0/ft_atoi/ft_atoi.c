/*
======================================./2-0-ft_atoi.txt=========================================
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
==========================================================================================
*/

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int res = 0;
	int flag = 1;

	while ((*str == ' ') || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			flag = -1;
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + *str - '0';
		str++;
	}

	return (res * flag);
}

#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("-233 4"));
}
