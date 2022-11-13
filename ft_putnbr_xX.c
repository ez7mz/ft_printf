/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:05:18 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/14 00:54:33 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putnbr_xX(unsigned long nbr, char *base)
{
    int len;
    unsigned int base_size;

    len = 0;
    base_size = ft_strlen(base);
    if (nbr >= 0 && nbr < base_size)
        len += ft_putchar(base[nbr % base_size]);
    else
    {
        len += ft_putnbr_xX(nbr / base_size, base);
        len += ft_putchar(base[nbr % base_size]);
    }
    return (len);
}
