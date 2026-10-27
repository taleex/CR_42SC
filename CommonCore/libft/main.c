/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:52:37 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/27 13:32:43 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("Ola-Mundo-42", '-');
	if (!res)
		return (1);
	i = 0;
	while (res[i])
	{
		printf("Palavra [%d]: %s\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
