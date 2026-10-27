/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:45:15 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/27 15:49:14 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number_leng(long nbr)
{
	size_t count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int is_negative;
	int leng;
	long nbr;

	is_negative = 0;
	nbr = n;
	leng = ft_number_leng(nbr);
	printf(" %d\n %d", leng,is_negative);
	if (n < 0)
	{
		is_negative = -1;
		n = -n;
	}
	return ("oopise");
}
