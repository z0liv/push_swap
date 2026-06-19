/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:07:53 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/19 11:39:49 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_back(t_stack *stack, t_d_list *new)
{
	if (!stack || !new)
		return ;
	if (!stack->head)
	{
		stack->head = new;
		stack->tail = new;
	}
	else
	{
		new->prev = stack->tail;
		stack->tail->next = new;
		stack->tail = new;
	}
	stack->head->prev = stack->tail;
	stack->tail->next = stack->head;
	stack->size ++;
}
/*
int	main(void)
{
	t_d_list	*node1;
	t_d_list	*node2;
	t_d_list	*node3;
	int		value1 = 42;
	int		value2 = 84;
	int		value3 = 126;

	// Create nodes
	node1 = ft_dlstnew(value1, 0);
	node2 = ft_dlstnew(value2, 1);
	node3 = ft_dlstnew(value3, 2);
	node1->next = node2;
	node2->next = node1;
	node1->prev = node2;
	node2->prev = node1;

	// Test content
	printf("node1 content = %d\n", node1->content);
	printf("node2 content = %d\n", node2->content);

	// Test next pointer
	printf("node1 next = %p\n", node1->next);
	printf("node2 next = %p\n", node2->next);
	
	// Test prev pointer
	printf("node1 prev content = %d\n", node1->prev->content);
	printf("node2 prev content = %d\n", node2->prev->content);
	
	printf("--------------------adding int the back-------------------- \n");
	ft_dlstadd_back(&node1, node3);
	
	printf("node1 content = %d\n", node1->content);
	printf("node2 content = %d\n", node2->content);
	printf("node3 content = %d\n", node3->content);

	// Test next pointer
	printf("node1 next = %p\n", node1->next);
	printf("node2 next = %p\n", node2->next);
	printf("node3 next = %p\n", node3->next);
	
	// Test prev pointer
	printf("node1 prev content = %d\n", node1->prev->content);
	printf("node2 prev content = %d\n", node2->prev->content);
	printf("node3 prev content = %d\n", node3->prev->content);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/
