/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:22:50 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:21:49 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lsttemp;

	if (!lst || !new)
		return ;
	lsttemp = ft_lstlast(*lst);
	if (!lsttemp)
	{
		*lst = new;
		return ;
	}
	lsttemp->next = new;
}
/*int	main(void)
{
	t_list	*head = NULL;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	int	a = 10;
	int	b = 20;
	int	c = 30;

	n1 = ft_lstnew(&a);
	n2 = ft_lstnew(&b);
	n3 = ft_lstnew(&c);

	// Add to back
	ft_lstadd_back(&head, n1);
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);

	// Print list
	t_list *tmp = head;
	while (tmp)
	{
		printf("%d\n", *(int *)tmp->content);
		tmp = tmp->next;
	}

	return (0);
}*/
