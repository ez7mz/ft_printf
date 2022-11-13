/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:05:18 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/13 20:05:21 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_xX(unsigned long nbr, char *base)
{
    unsigned long base_size;

    base_size = ft_strlen(base);
    if (nbr >= 0 && nbr <= base_size)
        ft_putchar(base[nbr%base_size]);
    else
    {
        ft_putnbr_xX(nbr / base_size, base);
        ft_putnbr_xX(nbr % base_size, base);
    }
}
