/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-25 07:42:38 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/05/06 08:41:27 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The ft_printf() function replicate the printf function (command to display
 * a formatted string on the screen).
 * 
 * @param char const * format   is the mandatory argument of printf.
 * @param ...                   are the variable arguments.
 * 
 * return A integer, if a positive value is returned (indicating the number of
 *                   characters written) it means the operation was successful.
 *                   If a negative number is returned there was some error.
 * 
*/

static int	ft_checker(va_list args, char checker)
{
	int	print_len;

	print_len = 0;
	if (checker == 'c')
		print_len += ft_putchar((char)va_arg(args, int));
	else if (checker == 's')
		print_len += ft_putstr(va_arg(args, char *));
	else if (checker == 'p')
		print_len += ft_putptr(va_arg(args, uintptr_t));
	else if (checker == 'd')
		print_len += ft_putnbr(va_arg(args, int));
	else if (checker == 'i')
		print_len += ft_putnbr(va_arg(args, int));
	else if (checker == 'u')
		print_len += ft_putnbr_uns(va_arg(args, unsigned int));
	else if (checker == 'x')
		print_len += ft_puthex(va_arg(args, unsigned int), checker);
	else if (checker == 'X')
		print_len += ft_puthex(va_arg(args, unsigned int), checker);
	else if (checker == '%')
		print_len += ft_putchar('%');
	else
		return (-1);
	return (print_len);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	int		i;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%' && str[i] != '\0')
			count += ft_putchar(str[i]);
		if (str[i] == '%')
		{
			i++;
			count += ft_checker(args, str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	int	result1;
	int	result2;

	result1 = ft_printf("Hello %c\n", 'd');
	ft_printf("%d character were written\n", result1);
	result1 = ft_printf("Hello %s\n", "Macarena");
	ft_printf("%d characters were written\n", result1);
	result1 = ft_printf("The ptr is %p", 0xa12df4e4);
	printf("%d characters were written\n\n", result1);
	result1 = ft_printf("The integer number is %i\n", 5692);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("The decimal number is %d\n", 5692);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("The unsigned number is %u\n", 253);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("The hexnum in lowercase is %x\n", 0xa12df4e4);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("The hexnum in uppercase is %X\n", 0xA12DF4E4);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("The symbol is %%\n");
	printf("%d characters were written\n", result1);
	result1 = ft_printf("Hi %s, age %i, yrbirth %d\n", "Marvin", 25, 1998);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("Hxn upc %X, lwc %x\n", 0xA12DF, 0xa12df);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("Hx upc %X, lwc %x, ptr %p\n", 0xA12DF, 0xa12df, 0xa12df);
	printf("%d characters were written\n", result1);
	result1 = ft_printf("Dec %d, Int %i, Uns %u, Porc %%\n", 15, -25, 32);
	printf("%d characters were written\n\n", result1);

	printf("---------------\n\n");

	result2 = printf("Hello %c\n", 'd');
	printf("%d character were written\n", result2);
	result2 = printf("Hello %s\n", "Macarena");
	printf("%d characters were written\n", result2);
	result2 = printf("The ptr is %p", 0xa12df4e4);
	printf("%d characters were written\n", result2);
	result2 = printf("The integer number is %i\n", 5692);
	printf("%d characters were written\n\n", result2);
	result2 = printf("The decimal number is %d\n", 5692);
	printf("%d characters were written\n\n", result2);	
	result2 = printf("The unsigned number is %u\n", 253);
	printf("%d characters were written\n", result2);	
	result2 = printf("The hexnum in lowercase is %x\n", 0xa12df4e4);
	printf("%d characters were written\n", result2);
	result2 = printf("The hexnum in uppercase is %X\n", 0xA12DF4E4);
	printf("%d characters were written\n", result2);
	result2 = printf("The symbol is %%\n");
	printf("%d characters were written\n", result2);
	result2 = printf("Hi %s, age %i, yrbirth %d\n", "Marvin", 25, 1998);
	printf("%d characters were written\n", result2);
	result2 = printf("Hxn upc %X, lwc %x\n", 0xA12DF, 0xa12df);
	printf("%d characters were written\n", result2);
	result2 = printf("Hx upc %X, lwc %x, ptr %p\n", 0xA12DF, 0xa12df, 0xa12df);
	printf("%d characters were written\n", result2);
	result2 = printf("Dec %d, Int %i, Uns %u, Porc %%\n", 15, -25, 32);
	printf("%d characters were written\n", result2);

	return (0);
}*/

int main()
{
    char    *ptr;
    ptr = "holamundo";
    int result1;
	int result2;
	int result3;
	int result4;
	int result5;
	int result6;
	int result7;
	
	ft_printf("-------Prueba ft_printf-------\n\n");
	result1= ft_printf("Mi nombre es %s, y la primera letra es la %c\n", "Diego", 'D');
	ft_printf("Ha contabilizado %d caracteres\n\n", result1);
	result2 = ft_printf("La dirección de memoria del puntero es %p\n", &ptr);
	ft_printf("Ha contabilizado %d caracteres\n\n", result2);
	result3 = ft_printf("Los números mágicos son %d y %i\n", 4, 2);
	ft_printf("Ha contabilizado %d caracteres\n\n", result3);
	result4 = ft_printf("Un ejemplo de unsigned int sería %u\n", 42);
	ft_printf("Ha contabilizado %d caracteres\n\n", result4);
	result5 = ft_printf("Hexadecimal mayúscula %X y en minúscula %x\n", 0xFF, 0x2A);
	ft_printf("Ha contabilizado %d caracteres\n\n", result5);
	result6 = ft_printf("Prueba de %%\n");
	ft_printf("Ha contabilizado %d caracteres\n\n", result6);
	result7 = ft_printf("%c%c%c:Estudiamos en %s, donde estamos viendo números hexadecimales en minúsculas %x y en mayúsculas %X, aunque no nos podemos olvidar de los unsigned int %u y de los punteros que se localizan mediante números hexadecimales, como el siguiente puntero %p. Finalmente la respuesta a todo son %d de posibilidades que acaban resultando como el número mágico %i\n", 'T', 'X', 'T', "42 Telefónica", 0xA5B, 0xFF, -1500, &ptr, 1000000, 42);
	ft_printf("Ha contabilizado %d caracteres\n\n", result7);
	
	printf("-------Prueba PRINTF ORIGINAL-------\n\n");
	result1= printf("Mi nombre es %s, y la primera letra es la %c\n", "Diego", 'D');
	printf("Ha contabilizado %d caracteres\n\n", result1);
	result2 = printf("La dirección de memoria del puntero es %p\n", &ptr);
	printf("Ha contabilizado %d caracteres\n\n", result2);
	result3 = printf("Los números mágicos son %d y %i\n", 4, 2);
	printf("Ha contabilizado %d caracteres\n\n", result3);
	result4 = printf("Un ejemplo de unsigned int sería %u\n", 42);
	printf("Ha contabilizado %d caracteres\n\n", result4);
	result5 = printf("Hexadecimal mayúscula %X y en minúscula %x\n", 0xFF, 0x2A);
	printf("Ha contabilizado %d caracteres\n\n", result5);
	result6 = printf("Prueba de %%\n");
	printf("Ha contabilizado %d caracteres\n\n", result6);
	result7 = printf("%c%c%c:Estudiamos en %s, donde estamos viendo números hexadecimales en minúsculas %x y en mayúsculas %X, aunque no nos podemos olvidar de los unsigned int %u y de los punteros que se localizan mediante números hexadecimales, como el siguiente puntero %p. Finalmente la respuesta a todo son %d de posibilidades que acaban resultando como el número mágico %i\n", 'T', 'X', 'T', "42 Telefónica", 0xA5B, 0xFF, -1500, &ptr, 1000000, 42);
	printf("Ha contabilizado %d caracteres\n\n", result7);
	return (0);
}


/*int	main(void)
{
	int		result1;
	int		result2;
	char	*ptr;

	ptr = "holamundo";
	ft_printf("-------Prueba ft_printf-------\n\n");
	result1 = ft_printf("La dirección de memoria del puntero es %p\n", &ptr);
	ft_printf("Ha contabilizado %d caracteres\n\n", result1);
	printf("-------Prueba PRINTF ORIGINAL-------\n\n");
	result2 = printf("La dirección de memoria del puntero es %p\n", &ptr);
	printf("Ha contabilizado %d caracteres\n\n", result2);

	return (0);
}*/
