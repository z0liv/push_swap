/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 15:09:22 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:13:24 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	int	a = 1;
	int	b = 2;
	int	c = 3;

	head = NULL;

	n1 = ft_lstnew(&a);
	n2 = ft_lstnew(&b);
	n3 = ft_lstnew(&c);

	// Add nodes to front
	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);

	// Print list
	t_list	*tmp = head;
	while (tmp)
	{
		printf("%d\n", *(int *)tmp->content);
		tmp = tmp->next;
	}

	// Free list
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	return (0);
}*/