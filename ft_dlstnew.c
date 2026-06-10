/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:05:44 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/10 09:50:04 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_d_list	*ft_dlstnew(int content, int index)
{
	t_d_list	*node;

	node = malloc(sizeof(t_d_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->index = index;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

/* 
just two nodes???
int	main(void)
{
	t_d_list	*node1;
	t_d_list	*node2;
	int		value1 = 42;
	int		value2 = 84;

	// Create nodes
	node1 = ft_dlstnew(value1);
	node2 = ft_dlstnew(value2);
	node1->next = node2;
	node2->next = node1;
	node1->prev = node2;
	node2->prev = node1;

	// Test content
	printf("node1 content = %d\n", (int) node1->content);
	printf("node2 content = %d\n", (int) node2->content);

	// Test next pointer
	printf("node1 next = %p\n", node1->next);
	printf("node2 next = %p\n", node2->next);
	
	// Test prev pointer
	printf("node1 prev = %p\n", node1->prev);
	printf("node2 prev = %p\n", node2->prev);

	free(node1);
	free(node2);

	return (0);
} */
