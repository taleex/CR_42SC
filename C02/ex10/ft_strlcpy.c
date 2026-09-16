/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:39:06 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/08 14:05:44 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_len;

	str_len = 0;
	while (src[str_len] != '\0')
		str_len++;
	if (size == 0)
		return (str_len);
	i = 0;
	while (src[i] != '\0' && i < (size -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (str_len);
}

/*
int main(void)
{
	char src[] = ",s";
	char dest[20];

	printf("%d\n", ft_strlcpy(dest, src, 10));
}
*/
