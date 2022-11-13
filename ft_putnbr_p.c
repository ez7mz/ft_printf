/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:18:30 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/13 19:54:27 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_p(unsigned long long nbr, char *base)
{
    unsigned long long base_size;

    base_size = ft_strlen(base);
    if (nbr >= 0 && nbr <= base_size)
        ft_putchar(base[nbr%base_size]);
    else
    {
        ft_putnbr_p(nbr / base_size, base);
        ft_putnbr_p(nbr % base_size, base);
    }
}
