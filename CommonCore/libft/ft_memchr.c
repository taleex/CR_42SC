/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:49:22 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/29 13:43:47 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				leng;
	const unsigned char	*str;

	leng = 0;
	str = (const unsigned char *)s;
	while (leng < n)
	{
		if (str[leng] == (unsigned char)c)
			return ((void *)&str[leng]);
		leng++;
	}
	return (NULL);
}
