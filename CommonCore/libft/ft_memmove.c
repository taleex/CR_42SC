/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:03:53 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/19 15:06:02 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	leng;
	char	*destmov;
	char	*srcmov;

	if (!dest && !src)
		return (NULL);
	destmov = (char *)dest;
	srcmov = (char *)src;
	leng = 0;
	if (destmov > srcmov)
	{
		while (n--)
		{
			destmov[n] = srcmov[n];
		}
	}
	else
	{
		while (n--)
		{
			destmov[leng] = srcmov[leng];
			leng++;
		}
	}
	return (destmov);
}
