/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:05:50 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/10 12:11:47 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* t_d_list	*ft_dlstmap(t_d_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_d_list	*node_tmp;
	t_d_list	*lst_tmp;
	void		*tmp;

	if (!lst || !f || !del)
		return (NULL);
	lst_tmp = NULL;
	while (lst)
	{
		tmp = (*f)(lst->content);
		node_tmp = ft_dlstnew(tmp);
		if (!node_tmp)
		{
			del(tmp);
			ft_dlstclear(&lst_tmp, del);
			return (NULL);
		}
		ft_dlstadd_back(&lst_tmp, node_tmp);
		lst = (*lst).next;
	}
	return (lst_tmp);
} */
