/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:18:30 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/14 00:36:17 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putnbr_p(unsigned long long nbr, char *base)
{
    unsigned long long base_size;
    int len;

    base_size = ft_strlen(base);
    len = 0;
    if (nbr >= 0 && nbr < base_size)
        len += ft_putchar(base[nbr%base_size]);
    else
    {
        len += ft_putnbr_p(nbr / base_size, base);
        len += ft_putchar(base[nbr % base_size]);
    }
    return (len);
}
