/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:06:19 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/10 18:12:26 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_getvalue(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	flag;
	int	result;

	base_len = ft_checkbase(base);
	if (base_len < 2)
		return (0);
	flag = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag *= -1;
		str++;
	}
	while (ft_getvalue(*str, base) != -1)
	{
		result = (result * base_len) + ft_getvalue(*str, base);
		str++;
	}
	return (result * flag);
}
/*
#include <stdio.h>

int	main(void)
{
	char base[] = "0123456789abcdef";
	char str[] = "0001";

	printf("%d", ft_atoi_base(str, base));
}
*/
