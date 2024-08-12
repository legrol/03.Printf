/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-06 06:20:34 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/05/06 08:46:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * The ft_putchar() function prints the character passed by parameter.
 *  
 * @param char c    The character to print.
 *     
 * return number of printed characters. In this case it is always 1.
 * 
*/

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
