#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	//printf("%d",ft_printf("hay un caracter %c en el s%ctring", '@', '@'));
	//printf("%d",printf("hay un caracter %c en el s%ctring", '@', '@'));
	//ft_printf("%shay un caracter %c en el s%ctring", "no" , '@', '@');
	
	//printf("%d",ft_printf("%d %s hay u %s n caracter %c en el s%ctring", 123, "no", "frse2" , '@', '@'));
	//printf("%d",printf("%d %s hay u %s n caracter %c en el s%ctring", 123, "no", "frse2" , '@', '@'));
	//printf("%d",ft_printf("%%"));
	//printf("\n%p\n",ft_printf("unsigned: %x", 302));
	
	//printf("\n%p\n",printf("unsigned: %x", 302));
	//printf("%d",printf("%%"));
	char ptr[]= "hola";

	ft_printf("\n%d\n",ft_printf("ptr: %p", ptr));	
	printf("\n%d\n",printf("ptr: %p", ptr));	
	return (0);
}