/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:06:10 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/19 15:06:49 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	leng;

	leng = 0;
	while (leng < n)
	{
		((unsigned char *)str)[leng] = (unsigned char)c;
		leng++;
	}
	return (str);
}
