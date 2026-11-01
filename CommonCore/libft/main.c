/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:52:37 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/01 14:51:50 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

int	main(void)
{


	char s[] = "hellosssss";
	char d[10] = "yupiii";
	ft_strlcpy(d, s, 3);

		printf("cpy %ld\n",ft_strlcpy(d, s, 3));



    return (0);
}
