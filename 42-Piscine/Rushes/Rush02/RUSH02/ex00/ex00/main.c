/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:02:22 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/20 17:30:46 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
		write (1, "Error\n", 40);
	else if (argc == 2)
		ft_org ("../numbers.dict", argv[1]);
	else if (argc == 3)
		ft_org (argv[1], argv[2]);
	else
		write (1, "Error\n", 7);
	return (0);
}
