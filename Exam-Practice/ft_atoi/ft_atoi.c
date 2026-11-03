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

int ft_atoi(const char *str)
{
	int res = 0;
	int flag = 1;
	int i = 0;

	while ((str[i] == ' ') || (str[i] >= 9 && 13 >= str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}

	return (res * flag);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("-2334"));
}
