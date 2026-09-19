/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:02:22 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/19 15:44:53 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_convert(char *path, char *src);

// receives args and does error handler
int	main (int argc, char **argv)
{

	if (argc == 1)
	{
		write(1, "Error - Insufficient parameters passed.\n", 40);
	}
	else if (argc == 2)
	{
		ft_convert("../numbers.dict", argv[1]);
	}
	else if(argc == 3)
	{
		ft_convert(argv[1],argv[2]);
	}
	else
	{
		write(1, "Error\n", 7);
	}
	return (0);
}
