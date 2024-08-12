/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-06 06:23:39 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/05/06 08:47:53 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The ft_puthex() function prints the corresponding hexadecimal character 
 * after performing the operation.
 *  
 * @param unsigned long long nb    	The number to evaluated.
 * @param char checker				Character to test ('x' or 'X')
 *     
 * return number of printed characters.
 * 
*/

int	ft_puthex(unsigned long long nb, char checker)
{
	unsigned long long	count;

	count = 0;
	if (nb >= 16)
		count += ft_puthex(nb / 16, checker);
	if (checker == 'x')
		ft_putchar("0123456789abcdef"[nb % 16]);
	if (checker == 'X')
		ft_putchar("0123456789ABCDEF"[nb % 16]);
	count++;
	return (count);
}
