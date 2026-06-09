/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khurtado <khurtado@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:39:51 by khurtado          #+#    #+#             */
/*   Updated: 2026/05/21 10:46:33 by khurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handler(va_list arg, char character)
{
	if (character == 'c')
		ft_print_char(va_arg(arg, int));
	if (character == 's')
		return (ft_print_str(va_arg(arg, char *)));
	if (character == 'p')
		return (ft_print_ptr(va_arg(arg, void *)) - 1);
	if (character == 'd' || character == 'i')
		return (ft_print_nbr(va_arg(arg, int)));
	if (character == 'u')
		return (ft_print_unbr(va_arg(arg, unsigned int)));
	if (character == 'x')
		return (ft_print_hexl(va_arg(arg, int)) - 1);
	if (character == 'X')
		return (ft_print_hexu(va_arg(arg, int)) - 1);
	if (character == '%')
		write(1, "%", 1);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		counter;
	int		entries;
	int		printed;

	va_start(arg, str);
	counter = -1;
	entries = 0;
	printed = 0;
	while (str[++counter])
	{
		if (str[counter] == '%')
		{
			printed += ft_handler(arg, str[counter + 1]);
			counter += 1;
			entries++;
		}
		else
			ft_print_char(str[counter]);
	}
	va_end(arg);
	return (counter - entries + printed);
}
/*
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	//printf("%d",ft_printf("hay un caracter %c en el s%ctring", '@', '@'));
	//printf("%d",printf("hay un caracter %c en el s%ctring", '@', '@'));
	//ft_printf("%shay un caracter %c en el s%ctring", "no" , '@', '@');
	
	//printf("%d",ft_printf("%d %s hay u %s n caracter %c en el 
	s%ctring", 123, "no", "frse2" , '@', '@'));
	//printf("%d",printf("%d %s hay u %s n caracter %c en el 
	s%ctring", 123, "no", "frse2" , '@', '@'));
	//printf("%d",ft_printf("%%"));
	//printf("\n%p\n",ft_printf("unsigned: %x", 302));
	
	//printf("\n%p\n",printf("unsigned: %x", 302));
	//printf("%d",printf("%%"));
	char ptr[]= "hola";

	ft_printf("\n%d\n",ft_printf("ptr: %p", ptr));	
	printf("\n%d\n",printf("ptr: %p", ptr));	
	return (0);
}
*/
