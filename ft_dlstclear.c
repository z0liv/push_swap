/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:04:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/17 09:04:53 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstclear(t_d_list **lst)
{
	t_d_list	*lsttmp;

	if (!lst)
		return ;
	lsttmp = *lst;
	while (lsttmp->index < lsttmp->next->index)
	{
		lsttmp = (*lsttmp).next;
		free(*lst);
		*lst = lsttmp;
	}
	free(*lst);
	*lst = NULL;
}
