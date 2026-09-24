/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:17:23 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/17 14:00:10 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	while (0 < power)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_iterative_power(2,2));
}
*/
