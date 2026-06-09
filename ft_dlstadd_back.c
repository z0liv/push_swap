/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:07:53 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/09 13:36:45 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_back(t_d_list **lst, t_d_list *new)
{
	t_d_list	*lst_temp;

	if (!lst || !new)
		return ;
	lst_temp = ft_dlstlast(*lst);
	if (!lst_temp)
	{
		*lst = new;
		return ;
	}
	lst_temp->next = new;
}
