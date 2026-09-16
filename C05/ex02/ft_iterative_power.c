/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:17:23 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/15 10:43:33 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_iterative_power(2,2));
}
*/
