/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 11:38:51 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/08 13:35:37 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!flag && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = ",salut, comment tu vas ?";

	printf("%s\n", ft_strcapitalize(str));
}
*/
