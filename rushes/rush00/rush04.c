/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 11:47:58 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/05 17:15:33 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n);
}

void	ft_printch(int cl, int rw, int x, int y)
{
	if ((cl == 1 && rw == 1))
		ft_putchar('A');
	else if ((rw == 1 && cl == x) || (rw == y && cl == 1))
		ft_putchar ('C');
	else if (rw == y && cl == x)
		ft_putchar('A');
	else if (rw == 1 || rw == y || cl == x || cl == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	cl;
	int	rw;

	x = ft_abs(x);
	y = ft_abs(y);
	rw = 1;
	while (rw <= y)
	{
		cl = 1;
		while (cl <= x)
		{
			ft_printch(cl, rw, x, y);
			cl++;
		}
		ft_putchar('\n');
		rw++;
	}
}
