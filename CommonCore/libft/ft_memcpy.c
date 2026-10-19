/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:51:11 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/19 17:52:23 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	leng;

	leng = 0;
	while (leng < n)
	{
		((unsigned char *)dest)[leng] = ((const unsigned char *)src)[leng];
		leng++;
	}
	return (dest);
}
