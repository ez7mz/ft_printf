/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:42:24 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/13 20:18:01 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_u(unsigned int nbr, char *base)
{
    unsigned int base_size;
    long n;

    base_size = ft_strlen(base);
    n = nbr;
    if (n >= 0 && n <= base_size)
        ft_putchar(base[n%base_size]);
    else
    {
        ft_putnbr_u(n / base_size, base);
        ft_putnbr_u(n % base_size, base);
    }
}
