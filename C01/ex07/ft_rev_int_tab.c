/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 13:13:52 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/07 13:43:11 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
int	main(void)
{
	int	arrint [] = {1, 2, 4, 2, 1, 5, 7, 4, 3, 1};
	int	size;

	size = 10;
	ft_rev_int_tab(arrint, size);

	int i = 0;
	while(i < size)
	{
		printf("%d", arrint[i]);
		i++;
	}
}
*/
