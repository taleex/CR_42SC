/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 08:57:14 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/17 14:18:27 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb >= 0)
	{
		res = 1;
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_iterative_factorial(0));
}
*/
