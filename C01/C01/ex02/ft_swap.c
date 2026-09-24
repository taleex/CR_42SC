/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 12:06:03 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/07 12:15:28 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tempvar;

	tempvar = *a;
	*a = *b;
	*b = tempvar;
}

/*
int	main(void)
{

	int	var1;
	int	var2;

	var1	= 23;
	var2	= 54;

	ft_swap(&var1, &var2);
}
*/
