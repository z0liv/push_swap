/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 09:07:15 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:15:09 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*lstcpy;

	counter = 0;
	lstcpy = lst;
	if (!lst)
		return (0);
	while (lstcpy)
	{
		lstcpy = lstcpy->next;
		counter++;
	}
	return (counter);
}
/*int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	int		a = 10;
	int		b = 20;
	int		c = 30;

	head = NULL;

	n1 = ft_lstnew(&a);
	n2 = ft_lstnew(&b);
	n3 = ft_lstnew(&c);

	ft_lstadd_front(&head, n1);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);

	// Print list size
	printf("List size: %d\n", ft_lstsize(head));

	return (0);
}*/