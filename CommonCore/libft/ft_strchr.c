/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:06:54 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/01 13:20:04 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	leng;

	leng = 0;
	while (s[leng])
	{
		if (s[leng] == (char)c)
			return ((char *)s + leng);
		leng++;
	}
	if ((char)c == '\0')
		return ((char *)s + leng);
	return (0);
}
