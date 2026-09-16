/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 12:14:18 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/03 17:06:06 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_print_char(char c);

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_char((num1 / 10) + '0');
			ft_print_char((num1 % 10) + '0');
			ft_print_char(' ');
			ft_print_char((num2 / 10) + '0');
			ft_print_char((num2 % 10) + '0');
			if (!(num1 == 98 && num2 == 99))
			{
				write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
