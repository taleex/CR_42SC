/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 10:59:04 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/04 10:35:42 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	print_data(char first, char second, char third)
{
	if (!(first == '7' && second == '8' && third == '9'))
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
		write(1, ", ", 2);
	}
	else
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
	}
}

void	ft_print_comb(void)
{
	char	first_number;
	char	second_number;
	char	third_number;

	first_number = '0';
	second_number = '0';
	third_number = '0';
	while (first_number <= '7')
	{
		second_number = first_number + 1;
		while (second_number <= '8')
		{
			third_number = second_number + 1;
			while (third_number <= '9')
			{
				print_data(first_number, second_number, third_number);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
