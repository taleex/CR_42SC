/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 11:36:02 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/15 13:34:54 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	while (res * res <= nb)
	{
		res++;
	}
	if ((res - 1) * (res - 1) == nb)
		return (res - 1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(81));
}
*/
