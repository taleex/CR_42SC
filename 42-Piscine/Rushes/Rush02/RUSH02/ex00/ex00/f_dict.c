/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_dict.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:49:01 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/20 17:36:02 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

// count number of lines;
int ft_isnewline(char *libline)
{
	int i;
	int count_lines;
	//(void)libline;
	i = 0;
	int level;

	level = 0;
	count_lines = 0;
	while (libline[i] != '\0')
	{
		if ((level == 0) && ((('0' <= libline[i] && libline[i] <= '9')) && libline[i] != '\0'))
			level = 1;

		if (level == 1 && (libline[i] == ':'))
			level = 2;

		if(level == 2 && (((('a' <= libline[i] && libline[i] <= 'z') || ('A' <= libline[i] && libline[i] <= 'Z'))) && libline[i] != '\0'))
			level = 3;

		if (level == 3 && libline[i] != '\n')
			level = 4;

		if(level == 4)
		{
			count_lines++;
			level = 0;
		}
		i++;
	}
	printf("lines: %d\n", count_lines);
	return (count_lines);
}
