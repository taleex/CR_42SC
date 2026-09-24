/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dibranco <dibranco@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 17:52:31 by dibranco          #+#    #+#             */
/*   Updated: 2026/09/06 16:16:43 by dibranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc > 3)
	{
		write(1, "Inputted too many arguments\n", 28);
		return (1);
	}
	if (argc < 3)
	{
		write(1, "Inputted insufficent amount of arguments\n", 42);
		return (1);
	}
	else
	{
		rush(atoi(argv[1]), atoi(argv[2]));
	}
}
