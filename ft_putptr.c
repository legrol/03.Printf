/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-06 06:26:37 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-05-06 06:26:37 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The ft_putptr() function the number of digits of the hexadecimal number 
 * passed by parameter, including the string '0x'.
 *  
 * @param uintptr_t	ptr  	The number to evaluated.
 *     
 * return the number of digits counted.
 * 
*/

int	ft_putptr(uintptr_t	ptr)
{
	size_t	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthex(ptr, 'x');
	return (count);
}
