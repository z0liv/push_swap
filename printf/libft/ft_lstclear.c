/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:02:19 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:28:42 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lsttmp;

	if (!lst || !del)
		return ;
	lsttmp = *lst;
	while (*lst)
	{
		lsttmp = (*lsttmp).next;
		ft_lstdelone(*lst, (*del));
		*lst = lsttmp;
	}
	free(*lst);
	*lst = NULL;
}
/*
void	del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*head = NULL;

	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));

	*a = 1;
	*b = 2;

	head = ft_lstnew(a);
	head->next = ft_lstnew(b);

	ft_lstclear(&head, del);

	if (!head)
		printf("List cleared\n");

	return (0);
}*/