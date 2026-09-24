/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 17:32:38 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/20 17:37:26 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
#define RUSH_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_org(char *path, char *src);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_libcreate(char *libline, char ***lib_arr);
void	ft_fileread(char *path, char *dist_buff);
int		ft_isnewline(char *libline);
int		ft_file_buffersize(char *path);
int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);

#endif
