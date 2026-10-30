/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: username <username@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:52:37 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/30 17:20:41 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

int	main(void)
{
    char ptr[] = "uisssss";
	char drt[20] = "opaaaaaaaaa";

	ft_memmove(drt, ptr, 10);

	printf("%s", drt);

    return (0);
}
