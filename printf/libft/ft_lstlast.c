/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:17:14 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:16:41 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstcpy;

	if (!lst)
		return (0);
	lstcpy = lst;
	while (lstcpy->next)
	{
		lstcpy = lstcpy->next;
	}
	return (lstcpy);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	int		a = 1;
	int		b = 2;
	int		c = 3;
	t_list	*last;

	head = NULL;

	n1 = ft_lstnew(&a);
	n2 = ft_lstnew(&b);
	n3 = ft_lstnew(&c);

	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);

	last = ft_lstlast(head);

	if (last)
		printf("Last element: %d\n", *(int *)last->content);

	return (0);
}*/
