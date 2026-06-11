/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:04:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/10 12:12:43 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	ft_dlstclear(t_d_list **lst, void (*del)(void*))
{
	t_d_list	*lsttmp;

	if (!lst || !del)
		return ;
	lsttmp = *lst;
	while (*lst)
	{
		lsttmp = (*lsttmp).next;
		ft_dlstdelone(*lst, (*del));
		*lst = lsttmp;
	}
	free(*lst);
	*lst = NULL;
} */
