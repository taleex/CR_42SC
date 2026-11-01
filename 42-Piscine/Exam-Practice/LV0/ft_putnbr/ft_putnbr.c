/*
Create a function that displays the number passed as a parameter. The function
must be able to handle all possible values of the int type.
• The function should be prototyped as follows:
void ft_putnbr(int nb);
• Example usage:
◦ ft_putnbr(42) outputs "42".
*/


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long nbr = nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if(nbr > 9)
	{
		ft_putnbr(nbr/10);
	}
	ft_putchar(nbr%10 + '0');
}
