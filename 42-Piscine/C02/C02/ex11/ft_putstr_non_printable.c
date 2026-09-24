/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:10:06 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/08 14:55:34 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar(hex[(unsigned char) str[i] / 16]);
			ft_putchar(hex[(unsigned char) str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
int main(void)
{
	char str[] = "Hello\nHow are you?";

	ft_putstr_non_printable(str);
}
*/
