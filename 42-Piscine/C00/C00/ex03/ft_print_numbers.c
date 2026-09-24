/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:27:49 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/04 10:33:13 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	current_number;

	current_number = '0';
	while (current_number <= '9')
	{
		write(1, &current_number, 1);
		current_number++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/
