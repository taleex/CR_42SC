/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:06:14 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/22 13:26:04 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
void	ft_ptarr(int *arr, int size)
{
	int		i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
}
*/
/*
int	main(void)
{
	int	*array;
	int	size;
	int	max;
	int	min;

	min = 1;
	max = 5;
	size = ft_ultimate_range(&array, min, max);
	if (size == -1)
		write(1, "Error - memory not allocated", 28);
	else if (size == 0)
		write(1, "Error - result is null", 22);
	else
	{
		ft_ptarr(array, size);
		free(array);
	}
	return (0);
}
*/
