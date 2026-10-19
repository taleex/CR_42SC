/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:50:14 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/19 13:51:01 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				leng;
	const unsigned char	*str1;
	const unsigned char	*str2;

	leng = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (leng < n)
	{
		if (str1[leng] != str2[leng])
			return (str1[leng] - str2[leng]);
		leng++;
	}
	return (0);
}
