/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 13:05:44 by omarquez          #+#    #+#             */
/*   Updated: 2026/07/07 08:51:03 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_d_list	*ft_dlstnew(int content, int norm_index)
{
	t_d_list	*node;

	node = malloc(sizeof(t_d_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->norm_index = norm_index;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
