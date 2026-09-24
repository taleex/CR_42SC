/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:27:05 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/22 13:23:59 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */
#include <stdlib.h>

/*
void	ft_strprint(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		write(1, &strs[i], 1);
		i++;
	}
}
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_total_leng(char **strs, char *sep, int size)
{
	int	leng;
	int	i;

	leng = 0;
	i = 0;
	while (i < size)
	{
		if (strs[i])
			leng += ft_strlen(strs[i]);
		if (i < size - 1 && *sep)
			leng += ft_strlen(sep);
		i++;
	}
	return (leng);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		leng;
	char	*join;
	int		i;

	if (!size)
	{
		join = malloc(1);
		join[0] = '\0';
		return (join);
	}
	leng = ft_total_leng(strs, sep, size);
	join = malloc(leng + 1);
	if (!join)
		return (NULL);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (strs[i])
			ft_strcat(join, strs[i]);
		if (i < size - 1 && strs[i])
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
/*
int	main(void)
{
	int		size;
	char	*strs[3] = {"yupppii", "yupii", "yupi!" };
	char	*sep = ", ";
	char	*array;

	size = 2;
	array = ft_strjoin(size, strs, sep);

	if (array)
	{
		ft_strprint(array);
		write(1, "\n", 1);
		free(array);
	}
	return (0);
}
*/
