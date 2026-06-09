/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:40:06 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/08 12:41:35 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nodetmp;
	t_list	*lsttmp;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	lsttmp = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		nodetmp = ft_lstnew(tmp);
		if (!nodetmp)
		{
			del(tmp);
			ft_lstclear(&lsttmp, del);
			return (NULL);
		}
		ft_lstadd_back(&lsttmp, nodetmp);
		lst = (*lst).next;
	}
	return (lsttmp);
}
/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%d -> ", *(int *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}
void	*duplicate_int(void *content)
{
	int	*new;

	new = malloc(sizeof(int));
	*new = *(int *)content * 2;
	return (new);
}

void	del(void *content)
{
	free(content);
}
	
int	main(void)
{
	t_list	*lst = NULL;
	t_list	*new_lst;

	int a = 1, b = 2, c = 3;

	ft_lstadd_back(&lst, ft_lstnew(&a));
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));

	printf("Original list:\n");
	print_list(lst);

	new_lst = ft_lstmap(lst, duplicate_int, del);

	printf("Mapped list (x2):\n");
	print_list(new_lst);

	ft_lstclear(&lst, NULL);   // no free needed for stack ints
	ft_lstclear(&new_lst, del);

	return (0);
}*/
