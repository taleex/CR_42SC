/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:31:56 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/19 18:08:29 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i],1);
		i++;
	}
}

// Receives path and returns number of bytes finds buffer
int	ft_file_buffersize(char *path)
{
	int		fl;
	char	buf[10];
	int		i;
	size_t	sz;

	fl = open(path,O_RDONLY);
	if (fl == -1)
		return (-1);
	i = 0;
	while ((sz = read(fl, buf, 1)) != 0)
		i = i + sz;
	close (fl);
	return (i);
}

// Read the file now that have buffersize
void	ft_fileread(char *path,char *dist_buff)
{
	int		fl;
	int		i;
	size_t	sz;

	fl = open(path,O_RDONLY);
	if (fl == -1)
		return ;
	i = 0;
	while ((sz = read(fl, &dist_buff[i], 1)) != 0)
		i = i + sz;
	dist_buff[i] = '\0';
	close (fl);
}

int	ft_countlines(char *str)
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] == '\n')
		{
				c++;
		}
		i++;

	}
	return (c);
}

#include <stdio.h>
void	ft_convert(char *path, char *src)
{
	int		i;
	int		x;
	char*	dist_buff;

	(void)src;
	i = ft_file_buffersize(path);
	if (i < 0)
		return ;
	dist_buff = malloc(sizeof(char) * (i + 1));
	if (dist_buff == NULL)
		return ;

	ft_fileread(path, dist_buff);

	x = ft_countlines(dist_buff);
	i = 0;

	free (dist_buff);
}
