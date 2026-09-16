/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:08:11 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/14 11:14:41 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i])
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

void	ft_print(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap(char **argv)
{
	int		i;
	char	*temp;
	int		swap;

	i = 1;
	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 2;
		while (argv[i])
		{
			if (ft_strcmp (argv[i], argv[i - 1]) < 0)
			{
				temp = argv[i];
				argv[i] = argv[i - 1];
				argv[i - 1] = temp;
				swap = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_swap(argv);
		ft_print(argv);
	}
	return (0);
}
