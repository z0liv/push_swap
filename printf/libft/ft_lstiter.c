/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:25:33 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:33:41 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lsttmp;

	if (!lst || !f)
		return ;
	lsttmp = lst;
	while (lsttmp)
	{
		(*f)(lst->content);
		lsttmp = (*lsttmp).next;
		lst = lsttmp;
	}
}
/*void	print_int(void *content)
{
	printf("%d\n", *(int *)content);
}

int	main(void)
{
	int	*a = malloc(sizeof(int));
	int	*b = malloc(sizeof(int));
	int	*c = malloc(sizeof(int));

	*a = 10;
	*b = 20;
	*c = 30;

	t_list *head = ft_lstnew(a);
	head->next = ft_lstnew(b);
	head->next->next = ft_lstnew(c);

	ft_lstiter(head, print_int);

	return (0);
}*/