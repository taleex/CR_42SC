/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:36:02 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/17 14:31:29 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	res;

	if (nb < 0)
		return (0);
	res = 0;
	while (res * res < nb)
	{
		res++;
	}
	if (res * res == nb)
		return (res);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(81));
}
*/
