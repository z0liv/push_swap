/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:38:08 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:26:43 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
/*void	del_int(void *content)
{
	free(content);
}
#include <stdio.h>
int	main(void)
{
	t_list	*node;
	int		*value;

	value = malloc(sizeof(int));
	*value = 42;

	node = ft_lstnew(value);

	printf("Before delete: %d\n", *(int *)node->content);

	ft_lstdelone(node, del_int);

	// node is now freed, do NOT access it anymore

	return (0);
}*/