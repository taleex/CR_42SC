/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:52:37 by jorgferr          #+#    #+#             */
/*   Updated: 2026/10/29 11:20:59 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("hey");
	printf("%s\n",(char *)node->content);

	free(node);
	return (0);
}
