/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:12:28 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/13 19:49:42 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_id(int nbr, char *base)
{
    int base_size;
    long n;

    base_size = ft_strlen(base);
    n = nbr;
    if (n >= 0 && n <= base_size)
        ft_putchar(base[n%base_size]);
    else if (n < 0)
    {
        ft_putchar('-');
        ft_putnbr_id(-n, base);
    }
    else
    {
        ft_putnbr_id(n / base_size, base);
        ft_putnbr_id(n % base_size, base);
    }
}
