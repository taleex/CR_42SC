/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:21:10 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/19 15:21:41 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	leng;

	leng = 0;
	while (s[leng])
		leng++;
	while (leng >= 0)
	{
		if (s[leng] == c)
			return ((char *)s + leng);
		leng--;
	}
	return (0);
}
