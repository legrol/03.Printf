/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-06 06:25:41 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-05-06 06:25:41 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The ft_putnbr_uns() function works with the unsigned number nb, to convert
 * it into a character and print it.
 *  
 * @param unsigned int nb  	The number to evaluated.
 *     
 * return Void.
 * 
*/

int	ft_putnbr_uns(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
		count += ft_putnbr_uns(nb / 10);
	count += ft_putchar('0' + nb % 10);
	return (count);
}
