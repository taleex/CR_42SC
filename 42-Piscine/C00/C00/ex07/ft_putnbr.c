/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:59:32 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/04 10:36:58 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num);
void	ft_put_char(char c);

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		ft_put_char('-');
		num = -num;
	}
	if (num <= 9 && num >= 0)
	{
		ft_put_char(num + '0');
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr (-1222);
}
*/
