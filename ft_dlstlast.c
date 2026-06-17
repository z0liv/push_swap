/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:06:08 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/16 13:23:12 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_d_list	*ft_dlstlast(t_d_list *lst)
{
	t_d_list	*lst_cpy;

	if (!lst)
		return (NULL);
	if (!lst->next)
		return (lst);
	lst_cpy = lst;
	while (lst_cpy->index < lst_cpy->next->index)
	{
		lst_cpy = lst_cpy->next;
	}
	return (lst_cpy);
}
/* int	main(void)
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
	node2->next = node3;
	node3->next = node1;
	node1->prev = node3;
	node2->prev = node1;
	node3->prev = node2;

	// Test content
	printf("node1 content = %d\n", node1->content);
	printf("node2 content = %d\n", node2->content);
	printf("node3 content = %d\n", node3->content);
	
	// Test index
	printf("node1 index = %d\n", node1->index);
	printf("node2 index = %d\n", node2->index);
	printf("node3 index = %d\n", node3->index);

	// Test next pointer
	printf("node1 next = %p\n", node1->next);
	printf("node2 next = %p\n", node2->next);
	printf("node3 next = %p\n", node3->next);
	
	// Test prev pointer
	printf("node1 prev content = %d\n", node1->prev->content);
	printf("node2 prev content = %d\n", node2->prev->content);
	printf("node3 prev content = %d\n", node3->prev->content);
	
	printf("last node content = %d\n", ft_dlstlast(node1)->content);
	free(node1);
	free(node2);

	return (0);
} */
