/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:17:33 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/19 15:18:19 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	leng;

	leng = 0;
	while (leng < n)
	{
		if (s1[leng] != s2[leng])
			return ((unsigned char)s1[leng] - (unsigned char)s2[leng]);
		if (s1[leng] == '\0')
			return (0);
		leng++;
	}
	return (0);
}
