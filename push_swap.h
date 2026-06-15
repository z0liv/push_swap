/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 09:10:23 by omarquez          #+#    #+#             */
/*   Updated: 2026/06/15 12:07:01 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "./printf/ft_printf.h"

typedef struct s_d_list
{
	int				content;
	int				index;
	struct s_d_list	*next;
	struct s_d_list	*prev;
}	t_d_list;

t_d_list	*ft_dlstnew(int content, int index);
void		ft_dlstadd_back(t_d_list **lst, t_d_list *new);
void		ft_dlstadd_front(t_d_list **lst, t_d_list *new);
t_d_list	*ft_dlstlast(t_d_list *lst);
int			ft_dlstsize(t_d_list *lst);
//void		ft_dlstclear(t_d_list **lst, void (*del)(void*));
//void		ft_dlstdelone(t_d_list *lst, void (*del)(void *));
//void		ft_dlstiter(t_d_list *lst, void (*f)(void *));
//t_d_list	*ft_dlstmap(t_d_list *lst, void *(*f)(void *), void (*del)(void *));

int			ft_is_valid_input(char *input);
int			ft_is_duplicate(long *array, int array_len);
int			ft_is_flag(char *param);
int			ft_is_overflow(long *array, int array_len);
int			ft_arr_to_lst(long	*arr, int *counter);
char		*ft_concat_params(char **args);
long int	ft_atol(const char *str);

#endif
