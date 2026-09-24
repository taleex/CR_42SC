/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_convert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:31:56 by jorgferr          #+#    #+#             */
/*   Updated: 2026/09/20 17:30:29 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

// // Something
// void	ft_number_convert(char ***lib_arr, char *userparms)
// {
// 	//int leng = ft_strlen(userparms);
// 	int i;
// 	int j;
// 	char *str_value;

// 	j = 0;
// 	i = 0;
// 	char to_print[4];

// 	while (lib_arr[i])
// 	{
// 		if(i % 3 == 0 && i >= 3)
// 		{
// 			to_print[0] = userparms[0];
// 			to_print[1] = '0';
// 			to_print[2] = '0';
// 			to_print[3] = '\0';
// 		}
// 		while (lib_arr[j])
// 		{
// 			str_value = ft_strstr(lib_arr[j][0], &to_print[0]);
// 			if (ft_strlen(lib_arr[j][0]) == 1)
// 				printf("hey");
// 			j++;
// 		}
// 		i++;
// 	}
// }

void	ft_org(char *path, char *src)
{
	int		i;
	char	*dist_buff;
	//char ***lib_arr;
	(void)src;
	i = ft_file_buffersize(path);
	if (i < 0)
		return ;

	dist_buff = malloc(sizeof(char) * (i + 1));
	//lib_arr = malloc(sizeof(char) * (i + 1));

	// if (dist_buff == 0)
	// 	return ;

	ft_fileread(path, dist_buff);

	ft_isnewline(dist_buff);
	//ft_libcreate(dist_buff, lib_arr);

	//ft_number_convert(lib_arr, src);
	i = 0;

	free (dist_buff);
}
