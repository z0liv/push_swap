/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:04:19 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/09 13:27:55 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_front(t_d_list **lst, t_d_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
