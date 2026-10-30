/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:03:53 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/30 17:25:06 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destmov;
	char	*srcmov;

	if (!dest && !src)
		return (NULL);
	destmov = (char *)dest;
	srcmov = (char *)src;
	if (destmov > srcmov)
	{
		while (n > 0)
		{
			n--;
			destmov[n] = srcmov[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destmov[i] = srcmov[i];
			i++;
		}
	}
	return (destmov);
}
