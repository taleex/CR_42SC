/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:32:03 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/04 10:36:46 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	char_alphabet;

	char_alphabet = 'a';
	while (char_alphabet <= 'z')
	{
		write (1, &char_alphabet, 1);
		char_alphabet++;
	}
}
/*
int main(){
    ft_print_alphabet();
}
*/
