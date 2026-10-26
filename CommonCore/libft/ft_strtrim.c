/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:23:35 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/26 16:25:05 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_space(char c, char *set)
{
	int leng;

	leng = 0;
	while (set[leng])
	{
		if (set[leng] == c)
			return (1);
		leng++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;
	char *res;

	start = 0;
	while (s1[start] && ft_is_space(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_space(s1[end - 1], set))
		end--;
	res = malloc (end - start + 1);
	while (s1[end - start - 1])
	{
		res[start] = s1[end - start - 1];
		start++;
	}
	res[start] = '\0';
	return (res);
}
