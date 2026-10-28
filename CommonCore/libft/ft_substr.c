/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:22:02 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/28 14:13:07 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	leng_i;
	size_t	leng_j;

	if (!s)
		return (NULL);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	leng_i = 0;
	leng_j = 0;
	while (s[leng_i])
	{
		if (leng_i >= start && leng_j < len)
		{
			dst[leng_j] = s[leng_i];
			leng_j++;
		}
		leng_i++;
	}
	dst[leng_j] = '\0';
	return (dst);
}
