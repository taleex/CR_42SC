/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:23:46 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/22 12:33:28 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int min = 0;
// 	int max = 9;
// 	int *arrs = ft_range(min, max);
// 	int i = 0;

// 	while (i < (max - min))
// 	{
// 		printf("%d", arrs[i]);
// 		i++;
// 	}

// 	free(arrs);
// }
