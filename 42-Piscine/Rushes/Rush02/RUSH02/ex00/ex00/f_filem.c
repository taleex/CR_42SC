/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_filem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 16:57:43 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/20 17:23:19 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

// Receives path and returns number of bytes finds buffer
int	ft_file_buffersize(char *path)
{
	int		fl;
	char	buf[10];
	int		i;
	int		sz;

	fl = open (path, 0);
	if (fl == -1)
		return (-1);
	i = 0;
	sz = read (fl, buf, 1);
	while (sz != 0)
	{
		i = i + sz;
		sz = read (fl, buf, 1);
	}
	close (fl);
	return (i);
}

// Read the file now that have buffersize
void	ft_fileread(char *path, char *dist_buff)
{
	int	fl;
	int	i;
	int	sz;

	fl = open(path, 0);
	if (fl == -1)
		return ;
	i = 0;
	sz = read(fl, &dist_buff[i], 1);
	while (sz != 0)
	{
		i = i + sz;
		sz = read(fl, &dist_buff[i], 1);
	}
	dist_buff[i] = '\0';
	close (fl);
}

// separate to array.
void	ft_libcreate (char *libline, char ***lib_arr)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (libline[i] != '\0')
	{
		while (!('0' <= libline[i] && libline[i] <= '9'))
		{
			i++;
		}
		// get number
		while ('0' <= libline[i] && libline[i] <= '9')
		{
			// alocate string to struct
			lib_arr[j][k][l] = libline[i];
			l++;
			i++;
		}
		lib_arr[j][k][l] = '\0';
		j = 0;
		k++;
		while (!(('a' <= libline[i] && libline[i] <= 'z') || ('A' <= libline[i] && libline[i] <= 'Z')))
		{
			i++;
		}
		// gets string
		while (('a' <= libline[i] && libline[i] <= 'z') || ('A' <= libline[i] && libline[i] <= 'Z'))
		{
			lib_arr[j][k][l] = libline[i];
			l++;
			i++;
		}
		lib_arr[j][k][l] = '\0';
		l = 0;
		k = 0;
		j++;
	}
}
