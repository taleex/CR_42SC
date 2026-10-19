/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:08:00 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/19 15:11:22 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	leng;
	char	*dst;

	leng = 0;
	while (s[leng])
	{
		leng++;
	}
	dst = malloc((leng + 1));
	if (!dst)
		return (NULL);
	leng = 0;
	while (s[leng])
	{
		dst[leng] = s[leng];
		leng++;
	}
	dst[leng] = '\0';
	return (dst);
}
