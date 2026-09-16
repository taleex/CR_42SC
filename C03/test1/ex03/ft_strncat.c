/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 09:58:33 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/13 10:37:34 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "Hello ";
	char src[] = "banapa";
	unsigned int nb = 10;

	printf("%s",ft_strncat(dest,src, nb));
}
*/
