/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:42:04 by username          #+#    #+#             */
/*   Updated: 2026/10/26 18:05:55 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_words(char *s, char c)
{
	int count;
	int i;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		strlen;
	int		j;
	char	**res;

	strlen = ft_count_words(c, s);
	res = malloc(ft_count_words() + 1);
	while (s[j])
	{
		while (s[j] != c)
		{
			res[i][j] = s[j];
			j++;
		}
		i++;
	}
	return (res);
}
