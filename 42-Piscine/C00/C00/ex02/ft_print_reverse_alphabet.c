/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:24:43 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/04 10:32:08 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	char_reversed_alphabet;

	char_reversed_alphabet = 'z';
	while (char_reversed_alphabet >= 'a')
	{
		write (1, &char_reversed_alphabet, 1);
		char_reversed_alphabet--;
	}
}
/*
int main()
{
    ft_print_reverse_alphabet();
}
*/
