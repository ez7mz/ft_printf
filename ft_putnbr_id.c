/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:12:28 by hmesrar           #+#    #+#             */
/*   Updated: 2022/11/13 23:38:35 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putnbr_id(int nbr, char *base)
{
    int base_size;
    long n;
    int len;

    base_size = ft_strlen(base);
    n = nbr;
    len = 0;
    if (n >= 0 && n <= base_size)
    {
        len += ft_putchar(base[n%base_size]);
    }
    else if (n < 0)
    {
        len += ft_putchar('-');
        len += ft_putnbr_id(-n, base);
    }
    else
    {
        len += ft_putnbr_id(n / base_size, base);
        len += ft_putnbr_id(n % base_size, base);
    }
    return (len);
}
