/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:45:15 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/28 11:38:11 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_leng(long nbr)
{
	size_t	count;

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
	int		leng;
	long	nbr;
	char	*res;

	nbr = n;
	leng = ft_number_leng(nbr);
	res = malloc(leng + 1);
	if (!res)
		return (NULL);
	res[leng] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		leng--;
		res[leng] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (res);
}
