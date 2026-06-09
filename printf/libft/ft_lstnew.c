/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:46:22 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:02:37 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	int		value1 = 42;
	int		value2 = 84;

	// Create nodes
	node1 = ft_lstnew(&value1);
	node2 = ft_lstnew(&value2);

	// Test content
	printf("node1 content = %d\n", *(int *)node1->content);
	printf("node2 content = %d\n", *(int *)node2->content);

	// Test next pointer
	printf("node1 next = %p\n", (void *)node1->next);
	printf("node2 next = %p\n", (void *)node2->next);

	free(node1);
	free(node2);

	return (0);
}*/