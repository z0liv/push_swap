/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:41:02 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/21 10:11:04 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_nbr(int nbr);
int	ft_print_unbr(int nbr);
int	ft_print_hexl(unsigned int nbr);
int	ft_print_hexu(unsigned int nbr);
int	ft_print_ptr(void *ptr);

#endif